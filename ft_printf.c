/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 17:44:14 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static void	ft_case(char c, va_list arg, int *count)
{
	if ((c == 'i') && (*count >= 0))
		ft_putnbr(va_arg(arg, int), count);
	if ((c == 'd') && (*count >= 0))
		ft_putdbl(va_arg(arg, long), count);
	if ((c == 'u') && (*count >= 0))
		ft_putun_nbr(va_arg(arg, unsigned int), count);
	else if ((c == '%') && (*count >= 0))
		ft_putchar('%', count);
	else if ((c == 's') && (*count >= 0))
		ft_putstr(va_arg(arg, char *), count);
	else if ((c == 'p') && (*count >= 0))
		ft_putptr(va_arg(arg, unsigned long long), count);
	else if ((c == 'X') && (*count >= 0))
		ft_putbase16(va_arg(arg, int), count, 'X');
	else if ((c == 'x') && (*count >= 0))
		ft_putbase16(va_arg(arg, int), count, 'x');
	else if ((c == 'c') && (*count >= 0))
		ft_putchar(va_arg(arg, int), count);
}

int	ft_printf(const char *format, ...)
{
	va_list	my_lis;
	int		i;
	int		count;


	count = 0;
	i = 0;
	va_start(my_lis, format);
	while (format[i] != '\0')
	{	
		if (format[i] == '%')
			ft_case(format[++i], my_lis, &count);
		else if (count >= 0)
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(my_lis);
	return (count);
}

int main(void)
{
	printf("%s", (char *)NULL);
	ft_printf("%s", (char *)NULL);
    printf("%u %d \n", 10, -1);
	ft_printf("%u %d \n", 10, -1);
	return (0);
}
