/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:10:49 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/17 09:20:29 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	c = (unsigned char)c;
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}
/*
#include <stdio.h> 
int main()
{
	char str[] = "Joao";
	
	printf("%s", ft_strchr(str, 'a'));
	
}
*/
