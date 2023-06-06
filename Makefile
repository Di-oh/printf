# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/06/06 17:20:40 by dionmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libftprintf.a 
HEADER 	= ft_printf.h
INC		= includes/
DIR_LIB	= includes/libft/
LIB		= $(DIR_LIB)Libft.a

SRC 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
		  ft_putbase16.c

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@


# Mis metodos:
all:$(NAME)

$(NAME): $(OBJS) $(LIB)
	@cp	$(LIB) $(NAME)
	@ar rcs $(NAME) $(OBJS) 

$(LIB):
	@make -C $(DIR_LIB)

clean:
	@make fclean -C $(DIR_LIB)
	@rm -rf $(OBJS) 

fclean: clean
	@make fclean -C $(DIR_LIB)
	@rm -f $(NAME)

re: fclean all


# Regla phony
.PHONY: re fclean clean all 


