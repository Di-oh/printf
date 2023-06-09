/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:14:50 by dionmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:42:24 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int num)
{
	if ((num < '0') || (num > '9'))
		return (0);
	return (1);
}
/*
int     main(void)
{
        printf("el char es digit: %i\n", ft_isdigit(50));
        printf("el char es digit: %i\n", isdigit(50));

        return (0);
}*/
