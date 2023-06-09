/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:34:12 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:47:28 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
		pt[i++] = 0;
}
/*
int	main(void)
{	
	char str[] = "Hola";
	ft_bzero(str, 3);
	printf("%s \n", str);
	char str2[] = "Hola";
	bzero(str2, 3);
	printf("%s \n", str2);
	return (0);
}*/
