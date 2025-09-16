/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:23:40 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/23 14:30:06 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char	s[] = "gauntlet";
	char	c = 'a';

	printf("%s", (char *)ft_memchr(s, c, 0));
}
*/