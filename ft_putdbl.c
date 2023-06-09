/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:00 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/09 19:59:17 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	ft_putdbl(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		if (*count != -1)
			ft_putstr("-2147483648", count);
	}
	else
	{
		if (nbr < 0 && *count != -1)
		{
			ft_putchar('-', count);
			nbr = -nbr;
		}
		if (nbr > 9)
		{
			if (*count != -1)
				ft_putdbl((nbr / 10), count);
			if (*count != -1)
				ft_putdbl((nbr % 10), count);
		}
		else
			if (*count != -1)
				ft_putchar(nbr + '0', count);
	}
}
