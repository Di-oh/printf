/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:17:32 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:41:33 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c = c + 32;
	return (c);
}
/*
int	main(void)
{	
	int	a = 'A';
	
	printf("cambiar %c a minusculas %c \n", a, ft_tolower(a));
	return (0);
}*/
