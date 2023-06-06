/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:13:09 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:24:34 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	ft_putptr(unsigned long long ptr, int *count)
{
	ft_putstr("0x", count);
    char    base16[] = "0123456789abcdef";

    if (ptr < 0)
    {
        ft_putchar('-', count);
        ptr = -ptr;
    }
    else if (ptr > 16)
    {
        ft_putptr(ptr % 16, count);
        ft_putptr(ptr / 16, count);
    }
    else
            ft_putchar(base16[ptr], count);	
}
