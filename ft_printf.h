/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:03:41 by dionmart          #+#    #+#             */
/*   Updated: 2023/06/06 17:36:33 by dionmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *c, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_putun_nbr(unsigned int nbr, int *count);
void	ft_putdbl(int nbr, int *count);
void	ft_putptr(unsigned long long ptr, int *count);
void	ft_putbase16(int nbr, int *count, char c);
#endif
