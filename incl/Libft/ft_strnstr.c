/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:24:49 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 10:20:04 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)big;
	i = 0;
	j = 0;
	if (!little[j])
		return (str);
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
		{
			j++;
			if (little[j] == '\0')
				return (str += i);
		}
		i++;
	}
	return (NULL);
}
/*
int     main(void)
{
//        char    *a = "que quee tal?";
//        char    *b = "quee";
        char    *c = "que quee tal?";
        char    *d = "tal?";
       char    *e = "que quee tal?";
        char    *f = "t";
        char    *g = "que quee tal?";
        char    *h = "z";
        char    *i = "que quee tal?";
        char    *j = "qu";
//        char    *k = "que quee tal?";
//        char    *l = "qu";

//	    printf("buscar %s en %s ", b, a);
//      printf(" devuelve: %s \n", ft_strnstr(a, b, 12));
        printf("** Con len 13, buscar %s en %s\n", d, c);
        printf(" devuelve: %s \n\n", ft_strnstr(c, d, 13));
        printf("** Con len 1, buscar %s en %s ", f, e);
        printf(" devuelve: %s \n\n", ft_strnstr(e, f, 1));
        printf("** Con len 1, buscar %s en %s ", h, g );
        printf(" devuelve: %s \n\n", ft_strnstr(g, h, 1));
        printf("** Con len 3, buscar %s en %s ", j, i);
        printf(" devuelve: %s \n\n", ft_strnstr(i, j, 3));
//        printf("buscar %s en %s ", l , k);
//        printf(" devuleve: %s \n\n", strnstr(k, l, 3));
        return (0);

}*/
