/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:41:44 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/11 12:26:52 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
/*
int	main()
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(120));
	printf("%d\n", ft_isprint(127));
}*/
