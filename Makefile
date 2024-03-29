# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/06/11 13:30:03 by dionmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libftprintf.a 
HEADER 	= ft_printf.h
SRC 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
		  ft_putbase16.c ft_putun_nbr.c
OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror  

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

# Mis metodos:
all: $(NAME)
 
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) 

fclean: 
	rm -rf $(OBJS) 
	rm -f $(NAME)

re: fclean all

# Regla phony
.PHONY: re fclean clean all
