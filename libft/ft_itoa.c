/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:03:03 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/21 13:05:21 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	digit_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	int_to_char(int n, char **str)
{
	int		i;

	if (n == 0)
	{
		(*str)[0] = '0';
		return ;
	}
	if (n > 0)
	{
		i = digit_count(n) - 1;
	}
	else
	{
		i = digit_count(n);
		n = n * -1;
	}
	while (n)
	{
		(*str)[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		str = ft_calloc((digit_count(n) + 2), sizeof(char));
		if (!str)
			return (NULL);
		int_to_char(n, &str);
		str[0] = '-';
		return (str);
	}
	str = ft_calloc((digit_count(n) + 1), sizeof(char));
	if (!str)
		return (NULL);
	int_to_char(n, &str);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
}
*/