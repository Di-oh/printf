# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/06/11 13:31:59 by dionmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libft.a
HEADER 	= libft.h

SRC 	= ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c \
		  ft_isprint.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcpy.c \
		  ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
		  ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
		  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
DEPS = $(addsuffix .d, $(basename $(SRC)))

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MT $@ -MMD

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c Makefile
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

# Mis metodos:
-include $(DEPS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: 
	rm -f $(NAME)
	rm -rf $(OBJS) $(DEPS)

re: fclean all

# Regla phony
.PHONY: re fclean clean all


