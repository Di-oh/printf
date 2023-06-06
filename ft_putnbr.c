/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:32:25 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 10:47:52 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void 	ft_putnbr(int num, int *count, char c)
{
	long	nbr;

	nbr = num;
	if (nbr < 0)
	{
		if (c == 'i')
			ft_putchar('-', count);
		nbr = -nbr;
	}
	else if (nbr > 9)
	{
		ft_putnbr((nbr % 10), count, c);
		ft_putnbr((nbr / 10), count, c);
	}
	else
	{	
		ft_putchar(nbr + '0', count);
	}
}

