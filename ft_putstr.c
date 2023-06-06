/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:37:13 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:20:45 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i]) 
	{
		ft_putchar(str[i], count);
		i++;
	}
}

