/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:29:12 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/25 12:32:17 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

static volatile int	g_ack_confirm = 0;

static void	ack_handler(int sig)
{
	(void)sig;
	g_ack_confirm = 1;
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

void	ack_aknowledge(int sig)
{
	if (sig ==  SIGUSR2)
		ft_printf("\nMessage sent successfuly! 😀\n");
}

static int	message_to_bits(pid_t pid, char *message, int len)
{
	int		i;
	int		j;
	int		bit;

	while (len--)
	{
		j = 7;
		while (j >= 0)
		{
			bit = (message[i] >> j) & 1;
			if (bit == 1)
			{
				if(kill(pid, SIGUSR1) == -1)
					return(write(2, "Message was not sent\n", 21), 0);
			}
			else
			{
				if(kill(pid, SIGUSR2) == -1)
					return(write(2, "Message was not sent\n", 21), 0);
			}
			while (!g_ack_confirm)
				pause();
			g_ack_confirm = 0;
			j--;
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	pid_t				pid;
	char				*message;
	struct sigaction	sa;

	if (ac != 3)
	{
		ft_printf("Error:\nInsert ./client <PID> followed by <Message>\n");
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
	signal(SIGUSR2, ack_aknowledge);
	if (!message_to_bits(pid, message, ft_strlen(message) + 1))
		exit(1);
}
