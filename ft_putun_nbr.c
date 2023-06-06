/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:34:48 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 17:40:41 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	ft_putun_nbr(unsigned int nbr , int *count)
{
	if (nbr > 9)
	{
		ft_putun_nbr((nbr % 10), count);
		ft_putun_nbr((nbr / 10), count);
	}
	else
		ft_putchar(nbr + '0', count);
}
