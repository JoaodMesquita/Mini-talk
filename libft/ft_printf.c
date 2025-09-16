/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:46:32 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/02 13:56:23 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	specifier_type(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == '%')
		count += ft_putchar('%');
	else if (specifier == 'u')
		count += ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += ft_puthexa(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += ft_puthexa_big(va_arg(args, unsigned int));
	else if (specifier == 'p')
		count += ft_pointer(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start (args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += specifier_type(format[i], args);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main()
{
	char	name[] = "Joao";
	int		age = 30;
	void 	*ptr = &name;

	// %s, %d; %%;
	ft_printf("My printf: Hello my name is %s and i'm %d\n", name, age);
	printf("OG printf: Hello my name is %s and i'm %d\n", name, age);
	// %c

	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("My printf: char: %c\n", 'A');
	printf("OG printf: char: %c\n", 'A');

	// %u
	ft_printf("My printf: Unsigned int: %u\n", -1);
	printf("OG printf: Unsigned int: %u\n", -1);
	// %x
	ft_printf("My printf: Hexadecimal: %x\n", 75);
	printf("OG printf: Hexadecimal: %x\n", 75);
	// %X
	ft_printf("My printf: Hexadecimal Big: %X\n", 100);
	printf("OG printf: Hexadecimal Big: %X\n", 100);

	ft_printf("My printf: pointer: %p\n", (void *)ptr);
	printf("OG printf: pointer: %p\n", (void *)ptr);

}
*/
