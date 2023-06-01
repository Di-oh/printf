/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/01 13:32:03 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int ft_printf(const char *format, ...)
{
	int 		num_arg;
	va_list	my_lis;

	num_arg = ft_count(format);
	va_start(my_list, num_arg);
	va_arg();


	return (i);
}
