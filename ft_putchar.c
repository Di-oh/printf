/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:28:57 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/09 20:07:56 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(char a, int *count)
{
	if (write(1, &a, 1) == -1)
		*count = -1;
	else
		*count = *count + 1;
}
