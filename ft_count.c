/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:43:41 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:22:47 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count(const char *format)
{
	int i;
	int arg;
	int count;

	arg = 0;
	count = 0;
	i = 0;
	while (format[i])
	{
		arg = 0;
		while (format[i] != '%' && format[i] != '\0')
			i++;
		if (format[i] == '\0')
			return (count);
		if (format[i] == '%')
		{
			arg  = 1;
			i++;
		}
		if ((format[i] == 'c' || format[i] == 's' || format[i] == 'p' || 
			format[i] == 'd' || format[i] == 'i' || format[i] == 'u' ||
			format[i] == 'x' || format[i] == 'X' || format[i] == '%') &&
			arg == 1)
		{
		    count ++;
		}
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	printf("Numero argumentos: %i", ft_count("hola %aaa %c aaa %c sjlkaj %% lakkl;ja %X"));
	return (0);
}*/
