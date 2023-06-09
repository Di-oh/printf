/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:22:35 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/05 20:55:33 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			s += i;
			return ((char *)s);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char 	str[] = "Antonio";
	
	printf("buscar la ultima t de antonio: %s\n", ft_strrchr(str, 't'));
	return (0);
}*/
