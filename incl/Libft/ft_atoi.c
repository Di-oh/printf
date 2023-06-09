/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:20:28 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/27 11:13:43 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		num;
	char	sign;

	i = 0;
	num = 0;
	sign = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\t') || (nptr[i] == '\v') || \
		(nptr[i] == '\n') || (nptr[i] == '\r') || (nptr[i] == '\f'))
		i++;
	if (nptr[i] == '-')
	{
		sign = 1;
		i++;
	}
	if ((sign == 1) && (nptr[i] == '+'))
		return (num);
	if (nptr[i] == '+')
		i++;
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
		num = (num * 10) + nptr[i++] - '0';
	if (sign == 1)
		num = -num;
	return (num);
}
/*
int 	main(void)
{

	printf("Resultado atoi: %i \n", atoi("123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("123"));
	printf("Resultado atoi: %i \n", atoi("-123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("-123"));
	printf("Resultado atoi: %i \n", atoi(" aaaa"));
	printf("Resultado mi atoi: %i \n", ft_atoi(" aaaa"));
	printf("Resultado atoi: %i \n", atoi("-aaa"));
	printf("Resultado mi atoi: %i \n", ft_atoi("-aaa"));
	printf("Resultado atoi: %i \n", atoi("   -123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   -123 12123"));
	printf("Resultado atoi: %i \n", atoi("   +-123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   +-123 12123"));
	printf("Resultado atoi: %i \n", atoi("   + 123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   + 123 12123"));
	printf("Resultado atoi: %i \n", atoi("   +*123 12123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("   +*123 12123"));
	printf("Resultado atoi: %i \n", atoi("+123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("+123"));
	printf("Resultado atoi: %i \n", atoi("+*123"));
	printf("Resultado mi atoi: %i \n", ft_atoi("+*123"));
	return (0);
}*/
