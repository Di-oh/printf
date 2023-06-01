/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:32:25 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/01 13:36:30 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void 	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr % 10);
		ft_putnbr(nbr / 10);
	}
	else
	{	
		ft_putchar(nbr + '0');
	}
}

