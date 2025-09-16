/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:04:41 by joapedro          #+#    #+#             */
/*   Updated: 2025/04/24 08:56:43 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main()
{
	int fd = open("test.txt", O_CREAT | O_RDWR, 00777);

	// fd -> file descriptor (integer que representa um ficheiro aberto)
	// open -> funcao que abre ou cria ficheiro (retorna fd)
	// O_CREAT | O_RDWR -> (flags) cria o ficheiro e abre para leitura e escrita
	// 00777 -> permissao do ficheiros (todos podem ler, escrever e executar)

	ft_putstr_fd("A", fd);
}
*/