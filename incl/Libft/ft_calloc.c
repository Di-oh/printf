/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:50:20 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:50:03 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*b;

	b = malloc(size * nmemb);
	if (b == NULL)
		return (b);
	ft_bzero(b, size * nmemb);
	return (b);
}
/*
int	 main(void)
{
	char	*b;
	char	*c;

	b = (char *)ft_calloc(0,8);
	printf("%s\n", b);
	free(b);
	c = (char *)calloc(0, 8);
	printf("%s\n", c);
	free(c);
	return (0);
}
*/
