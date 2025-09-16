/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:29:19 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/24 09:19:28 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	len;
	char			*res;
	unsigned int	i;

	len = ft_strlen(s);
	res = ft_calloc((len + 1), sizeof(char));
	if (!res)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
/*
char	lowercase(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

#include <stdio.h>
int main()
{
	char s[] = "JOAO";

	printf("%s\n", ft_strmapi(s, lowercase));
	
}
*/