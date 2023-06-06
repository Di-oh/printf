/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 16:34:47 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static void	ft_case(char c, va_list arg, int *count)
{
//	printf("count: %i \n", *count);
//	printf("opcion: %c", c);
	if (((c == 'i') || (c == 'd')) && (*count >= 0))
		ft_putnbr(va_arg(arg, int), count, c);
	if ((c == 'u') && (*count >= 0))
		ft_putnbr(va_arg(arg, unsigned int), count, c);
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
	else if (*count == -1)
		free(count);
}

int	ft_printf(const char *format, ...)
{
	va_list	my_lis;
	int		i;
	int		*count;

	count = malloc (sizeof(int) * 200);
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
//	printf("%s", (char *)NULL);
//	ft_printf("%s", (char *)NULL);
/*    printf("Hola %d \n",  -1);
	ft_printf("Hola %d \n",  -1);*/
	return (0);
}
