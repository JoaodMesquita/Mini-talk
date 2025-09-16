/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:50:12 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/18 10:23:31 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
	{
		return (0);
	}
	start = 0;
	while (trim(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (trim(set, s1[end -1]))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h> 
int main(void)
{
	char	s1[] = "abababTESTEababab";
	char	set[] = "ab";

	printf("%s\n", ft_strtrim(s1, set));
}
*/