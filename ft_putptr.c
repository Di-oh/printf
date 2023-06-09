/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:13:09 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/09 19:55:35 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putptr_r(unsigned long long ptr, int *count)
{
	char	*base16;

	base16 = "0123456789abcdef";
	if (ptr >= 16)
	{
		if (*count != -1)
			ft_putptr_r(ptr / 16, count);
		if (*count != -1)
			ft_putptr_r(ptr % 16, count);
	}
	else
	{
		if (*count != -1)
			ft_putchar(base16[ptr], count);

	}
}

void	ft_putptr(unsigned long long ptr, int *count)
{
	if (*count != -1)
		ft_putstr("0x", count);
	if (*count != -1)
		ft_putptr_r(ptr, count);
}
