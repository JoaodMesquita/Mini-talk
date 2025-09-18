/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:32:32 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/18 15:38:03 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	signal_handler(int sig)
{
	static char	letter;
	static int	bit_counter;

	letter = letter << 1; 
	if (sig == SIGUSR1)
		letter = letter | 1; //write number 1;
	bit_counter++;
	if (bit_counter == 8)
	{
		if (letter == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", letter);
		letter = 0;
		bit_counter = 0;
	}
} 

int	main(void)
{	
	struct	sigaction sa;
	sa.sa_handler = signal_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	
	ft_printf("Welcome to Spablob's server: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
