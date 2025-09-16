/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:42:02 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/14 11:31:16 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int main ()
{
	char string[] = "42 é para leets";
	
	ft_memset(string, '#', 2);

	printf("%s", string);
}*/
