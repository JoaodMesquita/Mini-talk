/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:09:45 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/11 14:26:30 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
		{
			return (s1p[i] - s2p[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char	s1[] = "joaopedro";
	char	s2[] = "z";

	printf("%d", ft_memcmp(s1, s2, 1));   
}
*/