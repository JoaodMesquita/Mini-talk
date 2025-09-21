/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:32:32 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/21 23:31:08 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	signal_handler(int signum, siginfo_t *info, void *context)
{
	static char	letter;
	static int	bit_counter;

	(void)context;
	letter = letter << 1;
	if (signum == SIGUSR1)
		letter = letter | 1;
	bit_counter++;
	if (bit_counter == 8)
	{
		if (letter == '\0')
			write(1, "\n", 1);
		else
			write(1, &letter, 1);
		letter = 0;
		bit_counter = 0;
	}
	kill(info->si_pid, SIGUSR1);
	
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Welcome to Spablob's server: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
