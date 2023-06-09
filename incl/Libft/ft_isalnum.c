/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:13:11 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/21 09:44:37 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int num)
{
	return (ft_isalpha(num) || ft_isdigit(num));
}
/*
int	main(void)
{
	int	a = 48;
	int	b = 112;
	int	c = 124;

	printf("Comprobar si %c es alnum : %i\n", a, ft_isalnum(a));
	printf("Comprobar si %c es alnum : %i\n", b, ft_isalnum(b));
	printf("Comprobar si %c es alnum : %i\n", c, ft_isalnum(c));
	return (0);
}*/
