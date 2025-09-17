/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:29:12 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/17 14:59:30 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

int	error_handler(pid_t pid)
{
	if (pid > PID_MAX || pid < 0)
		return (ft_putstr_fd("Error:\nInvalid PID!\n", 2), 1);
	if (pid == 0)
		return (ft_putstr_fd("Error:\nKernel PID!\n", 2), 1);
	else
		return (0);
}
void	bit_sender(pid_t pid, int bit)
{
	if (bit == 0)
		kill(pid, SIGUSR1);
	if (bit == 1)
		kill(pid, SIGUSR2);
}
void	message_to_bits(pid_t pid, char *message)
{
	int		i;
	int		j;
	int		bit;

	i = 0;
	while(message[i])
	{
		j = 7;
		while (j >= 0)
		{
				bit = (message[i] >> j) & 1;
				bit_sender(pid, bit);
			j--;
		}
		i++;
	}
} 

int	main (int ac, char **av)
{
	pid_t	pid;
	char	*message;

	if (ac != 3)
		return (ft_putstr_fd("Error:\nMust have PID and message\n", 2), 1);
	pid = ft_atoi(av[1]);
	message = av[2];
	if(error_handler(pid))
		exit(1);
	message_to_bits(pid, message);
}