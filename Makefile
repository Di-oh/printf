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
INCL = incl/
DIR_LIBFT = incl/Libft/
LIB_FT = $(DIR_LIBFT)libft.a
SRC 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c \
		  ft_putbase16.c ft_putun_nbr.c
DEPS = $(addsuffix .d, $(basename $(SRC))) 
OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCL) 
DFLAGS = -MT $@ -MMD

# Mis metodos:
-include $(DEPS)
all: make_lib $(NAME)
 
$(NAME): $(OBJS) 
	cp incl/libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

make_lib:
	$(MAKE) -C $(DIR_LIBFT)

clean:
	rm -rf $(OBJS) 
	rm -rf $(DEPS)
	$(MAKE) clean -C $(DIR_LIBFT)

fclean: 
	rm -rf $(OBJS) 
	rm -f $(NAME)
	rm -f $(DEPS)
	$(MAKE) fclean -C $(DIR_LIBFT)

re: fclean all

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c Makefile 
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

# Regla phony
.PHONY: re fclean clean all
