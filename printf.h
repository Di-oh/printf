/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:00:15 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/01 19:42:02 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
	
int		ft_printf(const char *format, ...);
void    ft_putchar(char c, int *count);
void	ft_putstr(char *c, int *count);
void	ft_putnbr(int nbr, int *count);
#endif
