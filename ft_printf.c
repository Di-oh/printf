/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:32:24 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include <stdio.h>

static void ft_case(char c, va_list arg, int *count)
{
	if (((c == 'i') || (c == 'd') || (c == 'u')) && (*count <= 0))
		ft_putnbr(va_arg(arg, int), count, c);
	else if ((c == '%') && (*count <= 0))
		ft_putchar('%', count);
	else if ((c == 's') && (*count <= 0))
		ft_putstr(va_arg(arg, char *), count);
	else if ((c == 'p') && (*count <= 0))
		ft_putptr(va_arg(arg, unsigned long long), count);
	else if ((c == 'X') && (*count <= 0))
		ft_putbase16(va_arg(arg, int), count, 'X');
	else if ((c == 'x') && (*count <= 0))
		ft_putbase16(va_arg(arg, int), count, 'x');
	else if ((c == 'c') && (*count <= 0))
		ft_putchar(va_arg(arg, int), count);
}

int ft_printf(const char *format, ...)
{
	va_list	my_lis;
	int		i;
	int		*count;
	
	count  = malloc (sizeof(int)*200);	
	*count = 0;
	i = 0;
	va_start(my_lis, format);
	while (format[i] != '\0')
	{	
		if (format[i] == '%')
			ft_case(format[++i], my_lis, count);
		else if (*count >= 0)
			ft_putchar(format[i], count);
		i++;
	}
	va_end(my_lis);
	i = *count;
	free(count);
	return (i);
}

int main(void)
{
//	printf("Hola \n");
	ft_printf("Hola \n");
	return (0);
}
