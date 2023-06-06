/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:37:13 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 16:28:02 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str ==  NULL)
		ft_putstr("(null)", count);
	else 
		while (str[i])
		{
			ft_putchar(str[i], count);
			i++;
		}
}
