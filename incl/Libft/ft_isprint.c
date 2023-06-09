/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:01:08 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:43:00 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c = 97;
	int	d = 200;
	
	printf("Comprobar si el caracter %c es printeable: %i\n", c, ft_isprint(c));
	printf("Comprobar si el caracter %c es printeable: %i\n", d, ft_isprint(d));
	return (0);
}*/
