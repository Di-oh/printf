/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:06:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 12:00:46 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			s += i;
			return ((char *)s);
		}	
		i++;
	}
	if (s[i] == (char)c)
	{
		s += i;
		return ((char *)s);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "Holaaa";
	int	c = 'a';

	printf("Buscar la letra %c en %s resultado: %s\n", c, s, ft_strchr(s, c));
	return (0);
}*/
