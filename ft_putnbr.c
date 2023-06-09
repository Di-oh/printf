/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:32:25 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 17:38:27 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
                ft_putstr("-2147483648", count);
	else 
	{
		if (nbr < 0)
		{	
			ft_putchar('-', count);
			nbr = -nbr;
		}
		if (nbr > 9)
		{
			ft_putnbr((nbr / 10), count);
			ft_putnbr((nbr % 10), count);
		}
		else
			ft_putchar(nbr + '0', count);
	}
}
