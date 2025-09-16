/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:29:12 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/16 15:25:31 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

int	error_handler(int ac, char **av)
{
	pid_t	pid;

	if (ac != 3)
		return (ft_putstr_fd("Error: Must have PID and message\n", 2), 1);
	pid = ft_atoi(av[1]);
	if (pid > PID_MAX || pid < 0)
		return (ft_putstr_fd("Error:Invalid PID!\n", 2), 1);
	if (pid == 0)
		return (ft_putstr_fd("Error:Kernel PID!\n", 2), 1);
	else
		return (0);
}

void	message_to_bits(char **av)
{
	(void)av;
	ft_printf("OK!");
} 

int	main (int ac, char **av)
{
	char	*message;

	if(error_handler(ac, av))
	exit(0);
	message = av[2];
	message_to_bits(&message);
}