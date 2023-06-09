/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:01:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/24 21:15:51 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_num(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fillarray(char *str, int n, int digits)
{
	int	modul;
	int	x;

	x = 0;
	modul = 0;
	if (n < 0)
	{	
		n = n * -1;
		str[0] = '-';
		x = 1;
	}
	digits = digits - 2;
	while (digits >= x)
	{
		modul = n % 10;
		n = n / 10;
		str[digits--] = modul + '0';
	}
}	

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	digits = ft_count_num(n) + 1;
	str = ft_calloc(digits, sizeof(char));
	if (!str)
		return (NULL);
	ft_fillarray(str, n, digits);
	return (str);
}
/*
int	main(void)
{
	char *str;

	str = ft_itoa(-2147483648LL);
	printf("%s \n", str);
	free(str);
	return (0);

}*/
