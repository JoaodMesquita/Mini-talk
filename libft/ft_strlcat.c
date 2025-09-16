/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:41:57 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/22 09:20:51 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	total = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
	}
	if (size > i)
	{
		while (i + j < size -1 && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	else
	{
		return (size + ft_strlen(src));
	}
	dst[i + j] = '\0';
	return (total);
}
//#include <stdio.h>
/*
int main ()
{
    char dst[4] = "joao";
    char src[] = "pedro";
    
    ft_strlcat(dst, src, 2);
    printf("%s", dst);
}
*/