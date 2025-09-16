/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:29:30 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/23 15:01:19 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		ft_bzero (ptr, nmemb * size);
		return (ptr);
	}
}
/*
#include <stdio.h>
int main() {

	int *str;
	int	i;

	str = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (*str);
}
*/
