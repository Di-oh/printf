/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:00:15 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:22:44 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void    ft_putchar(char c, int *count);
void	ft_putstr(char *c, int *count);
void	ft_putnbr(int nbr, int *count, char c);
void    ft_putptr(unsigned long long ptr, int *count);
void 	ft_putbase16(int nbr, int *count, char c);
#endif
