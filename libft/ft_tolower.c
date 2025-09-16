/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:01:51 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/11 12:33:51 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	char	c = 'a';
	char	d = 'A';

	printf("%c", ft_tolower(c));
	printf("%c", ft_tolower(d));
}*/
