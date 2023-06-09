/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:52:02 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:55:48 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str1 = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (str1 == NULL)
		return (NULL);
	ft_strlcpy(str1, s1, (len_s1 + 1));
	ft_strlcat(str1, s2, (len_s1 + len_s2 + 1));
	return (str1);
}
/*
int	main(void)
{
	char *b;
	char *c;

	b = ft_strjoin("Hola", "Dionisia");
	c = ft_strjoin("", "Dionisia");
	printf("%s\n", b);
	free(b);
	printf("%s\n", c);
	free(c);
	return (0);
}*/
