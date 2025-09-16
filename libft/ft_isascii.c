/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:40:53 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/11 12:26:32 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
/*
int	main()
{
	printf("%d\n", ft_isascii('3'));
	printf("%d\n", ft_isascii('?'));
	printf("%d\n", ft_isascii(128));
}*/
