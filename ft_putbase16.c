/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:30:11 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:25:33 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void ft_putbase16(int nbr, int *count, char c)
{
	char	base16[] = "0123456789ABCDEF";
	char	base16_lw[] = "0123456789abcdef";

	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr = -nbr;
	}
	else if (nbr > 16)
	{
		ft_putbase16(nbr % 16, count, c);
		ft_putbase16(nbr / 16, count, c);
	} 
	else
	{
		if (c == 'X') 
			ft_putchar(base16[nbr], count);
		else 
			ft_putchar(base16_lw[nbr], count);
	}
}