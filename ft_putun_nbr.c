/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:34:48 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/09 20:04:27 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	ft_putun_nbr(unsigned int nbr, int *count)
{
	if (nbr > 9)
	{
		if (*count != -1)
			ft_putun_nbr((nbr / 10), count);
		if (*count != -1)
			ft_putun_nbr((nbr % 10), count);
	}
	else
	{
		if (*count != -1)
			ft_putchar(nbr + '0', count);
	}
}
