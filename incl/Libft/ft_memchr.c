/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:20:06 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:45:51 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pt[i] == (unsigned char)c)
		{
			s += i;
			return ((void *)s);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str= "Dionisia";

	printf("buscar en %s el lugar donde encuentres la n: %s\n",  
	str, (char *)ft_memchr(str, 'n', 5));
	return (0);
}*/
