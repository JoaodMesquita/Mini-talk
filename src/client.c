/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:29:12 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/18 19:05:54 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

static volatile int	ack_confirm = 0;

static void	ack_handler(int sig)
{
	(void)sig;
	ack_confirm = 1;
}

static int	error_handler(pid_t pid)
{
	if (pid > PID_MAX || pid < 0)
		return (ft_putstr_fd("Error:\nInvalid PID!\n", 2), 1);
	if (pid == 0)
		return (ft_putstr_fd("Error:\nKernel PID!\n", 2), 1);
	else
		return (0);
}

static void	message_to_bits(pid_t pid, char *message)
{
	int		i;
	int		j;
	int		bit;
	int		len;

	len = 0;
	while (message[len])
		len++;
	len++;
	i = 0;
	while(len--)
	{
		j = 7;
		while (j >= 0)
		{
				bit = (message[i] >> j) & 1;
				if (bit == 1)
					kill(pid, SIGUSR1);
				else
					kill(pid, SIGUSR2);
				while (!ack_confirm)
					usleep(100);
				ack_confirm = 0;
			j--;
		}
		i++;
	}
} 

int	main (int ac, char **av)
{
	pid_t	pid;
	char	*message;
	struct	sigaction sa;
	
	if (ac != 3)
	{
		ft_printf("Error:\nMust have PID and message\n");
		exit(1);
	}
	pid = ft_atoi(av[1]);
	message = av[2];
	if (error_handler(pid))
		exit(1);
	sa.sa_handler = ack_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	message_to_bits(pid, message);
}
