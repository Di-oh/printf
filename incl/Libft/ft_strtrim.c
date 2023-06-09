/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:37 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/22 16:14:19 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_findstart(char const *s1, char const *set)
{	
	int	ini;

	ini = 0;
	if (!s1)
		return (0);
	while (s1[ini])
	{
		if (!ft_strchr(set, s1[ini]))
			return (ini);
		ini++;
	}
	return (ini);
}

static int	ft_findend(char const *s1, char const *set)
{
	int	end;

	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1);
	while (s1[end - 1])
	{
		if (!ft_strrchr(set, s1[end]))
			return (end);
		end--;
	}
	return (end);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		end;
	char	*str;

	end = 0;
	if (!*s1)
		return (ft_strdup(""));
	if (!*set)
		return (ft_strdup(s1));
	ini = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	str = ft_substr(s1, ini, end - ini + 1);
	return (str);
}
/*
int	main(void)
{

//	printf("%s\n", ft_strtrim("HolaHolacaraccola", "Hola"));
//	printf("%s\n", ft_strtrim(" 1234567890 ", " "));
	printf("%s \n", ft_strtrim("",""));
	return (0);
}*/
