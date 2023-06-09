/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:07:59 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/24 18:24:45 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pt_dst;
	char	*pt_src;
	size_t	i;

	pt_dst = (char *)dst;
	pt_src = (char *)src;
	i = 0;
	if ((!pt_dst) && (!pt_src))
		return (pt_dst);
	while (i < n)
	{
		pt_dst[i] = pt_src[i];
		i++;
	}
	return (pt_dst);
}
/*
int 	main(void)
{
	char	dest[4] = "";
	char	*src = "Holaa";

	printf ("%s \n", (char *)ft_memcpy(dest, src, 4));
	return (0);
}*/
