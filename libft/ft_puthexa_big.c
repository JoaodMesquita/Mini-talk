/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:03 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/02 13:56:03 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_big(unsigned long n)
{
	int		count;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthexa_big(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
