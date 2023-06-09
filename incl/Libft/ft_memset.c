/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:20:40 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:50:35 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*pt;

	pt = (unsigned char *)b;
	i = 0;
	while (i < len)
		pt[i++] = (unsigned char)c;
	return ((void *)pt);
}
/*
int	main(void)
{
	char	str[22] = "Holaaaaaaaaaaaaaaaaaaa";
	int	c = 'a';

	printf("String antes: %s\n", str);
	//vamos a substituir desde la posion 1 en 3 
	//caracters el valor inicial por el indicado.
	ft_memset(str, 'o', 8*sizeof(char));
	printf ("string despues: %s \n", str);
	return (0);
}*/
