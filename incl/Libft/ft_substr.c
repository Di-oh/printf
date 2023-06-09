/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:01:57 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/22 16:03:19 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	len_s;
	size_t			i;

	i = 0;
	if (!s || len == 0)
		return (ft_strdup(""));
	len_s = ft_strlen(s);
	if (start + len == len_s + 1)
		return (ft_strdup(s + start));
	if (len > len_s + 1)
		len = len_s - start;
	if (len_s <= start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	s += start;
	while (i <= (len - 1))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{	
	char	*a = "Hola";
	char	*b;
	
	b = ft_substr(a, 0, 5);
	printf("%s \n", b);
	free(b);
	return (0);
}*/
