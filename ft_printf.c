/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/01 20:10:02 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

static void ft_case(char c, char *arg, int *count)
{
	if (c == 'i' || c == 'd' || c == 'u')
		ft_putnbr(va_arg(arg, int), &count, char c);
	else if (c == '%')
		ft_putchar('%', &count);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), &count);
	else if (c == 'p')
		ft_putptr(va_arg(arg, void *), &count);
	else if (c == 'X')
		ft_putnbr16(va_arg(arg, int), &count, 'X');
	else if (c == 'x')
		ft_putnbr16(va_arg(arg, int), &count, 'x');
	else if (c == 'c')
		ft_putchar(va_arg(arg, char), &count);
}

int ft_printf(const char *format, ...)
{
	va_list	my_lis;
	int		i;
	int		*count;
	
	*count = 0;
	va_start(my_lis, format);
	while (format[i] != '\0')
	{	
		if (format[i] == '%')
			ft_case(format[++i], &my_lis, &count);
		else 
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(my_lis);
	i = *count;
	return (i);
}
