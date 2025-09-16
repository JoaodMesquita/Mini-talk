/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:07:38 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/24 11:10:04 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest_p);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "joao";
	char	*dest = str + 2;
	ft_memcpy(dest, str, 30);
	printf("%s", str);
}
*/