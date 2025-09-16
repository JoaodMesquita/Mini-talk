/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:40:11 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/11 11:23:33 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('!'));
	printf("%d\n", ft_isalnum('/'));
}*/
