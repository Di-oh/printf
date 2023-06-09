/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:12:53 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:12:43 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	character;
	int	i;

	character = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (character == 0))
		{
			words++;
			character = 1;
		}
		else
		{
			if (s[i] == c)
				character = 0;
		}
		i++;
	}
	return (words);
}

static void	ft_free(char **ptr)
{	
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static char	**ft_fill(char **array, int num, char c, char const *s)
{
	int		i;
	int		x;
	int		ini;

	x = 0;
	while (s && x < num)
	{
		i = 0;
		while (s[i] == c)
			i++;
		ini = i;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		array[x] = ft_substr(s, ini, i - ini);
		if (!array[x++])
		{
			ft_free(array);
			return (NULL);
		}
		s += i;
	}
	array[x] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	int				num;

	num = ft_count_words(s, c);
	array = malloc (sizeof(char *) * (num + 1));
	if (!array)
		return (NULL);
	else
		return (ft_fill(array, num, c, s));
}
/*
int	main(void)
{
	char **prueba;
	int i = 0;
	int n = ft_count_words(" lorem   ipsum dolor     	sit amet,
   	consectetur adipiscing elit. Sed non risus. Suspendisse   ", ' ');

	prueba = ft_split(" lorem   ipsum dolor     sit amet, consectetur 
  	adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while (i < n)
	{
		printf("%s\n",prueba[i]);
		i++;
	}
	return (0);
}*/
