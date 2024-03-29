/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:30:11 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/09 20:05:59 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putbase16(unsigned int nbr, int *count, char c)
{
	char	*base16;
	char	*base16_lw;

	base16 = "0123456789ABCDEF";
	base16_lw = "0123456789abcdef";
	if (nbr >= 16)
	{
		if (*count != -1)
			ft_putbase16(nbr / 16, count, c);
		if (*count != -1)
			ft_putbase16(nbr % 16, count, c);
	}
	else
	{
		if (c == 'X')
		{
			if (*count != -1)
				ft_putchar(base16[nbr], count);
		}
		else
		{
			if (*count != -1)
				ft_putchar(base16_lw[nbr], count);
		}
	}
}
