# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/06/10 16:04:19 by dionmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libftprintf.a 
HEADER 	= ft_printf.h
INCL = incl/
DIR_LIBFT = incl/Libft/
LIB_FT = $(DIR_LIBFT)libft.a

SRC 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
		  ft_putbase16.c ft_putun_nbr.c ft_putdbl.c

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCL) 

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c $(HEADER) $(LIB_FT)
	$(CC) $(CFLAGS) -c $< -o $@


# Mis metodos:
all:
	$(MAKE) -C $(DIR_LIBFT)
	$(MAKE) $(NAME) 
 
$(NAME): $(OBJS) $(LIB_FT) 
	cp incl/libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C $(DIR_LIBFT)
	rm -rf $(OBJS) 

fclean: 
	$(MAKE) fclean -C $(DIR_LIBFT)
	rm -rf $(OBJS) 
	rm -f $(NAME)

re: fclean all


# Regla phony
.PHONY: re fclean clean all
