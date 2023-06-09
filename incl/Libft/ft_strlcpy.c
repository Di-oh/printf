/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:14:09 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 10:00:46 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((i < (dstsize - 1)) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*int	main(void)
{
	const char	src[] = "Origen";
	char		dst[] = "Dest";
	size_t		a;

	a = ft_strlcpy(dst, src, 5);

	printf ("dest: %s \n", dst);
	printf ("nº de src: %zu \n", a);
	return (0);
}*/
/*	const char	src2[] = "Ori";
	char		dst2[] = "Dest";
	size_t		b;

	b = strlcpy(dst2, src2, 4);
	
	const char	src3[] = "Origen";
	char		dst3[] = "Dest";
	size_t		c;

	printf ("dest: %s \n", dst);
	printf ("dest2: %s \n", dst2);
	printf ("nº de src: %zu \n", a);
	printf ("nº de src2: %zu \n", b);

	c = strlcpy(dst3, src3, 0);
	
	printf ("dest3: %s \n", dst3);
	printf ("nº de src3: %zu \n", c);
	*/
/*	return (0);
}*/
