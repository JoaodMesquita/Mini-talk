/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:11 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/24 12:54:03 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{	
    char    haystack[] = "goncalo";
    char    needle[] = "a";
	char	needle2[] = "";
	
    ft_strnstr(haystack, needle2, 18);
    printf("%s", haystack);
}
*/