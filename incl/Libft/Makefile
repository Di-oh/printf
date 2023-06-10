# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/06/10 13:19:28 by dionmart         ###   ########.fr        #
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

BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)
OBJ_B = $(BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 

# Metodo Implicito:
#regla patron $< substituir los nombre del output, $@ los del input
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@


# Mis metodos:
all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

#'$^' es una lista de todos los requisitos previos de la regla
bonus: $(NAME) $(BONUS) $(OBJ_B)
	ar rcs $(NAME) $^

clean:
	rm -rf $(OBJS) $(OBJ_B)

fclean: 
	rm -f $(NAME)
	rm -rf $(OBJS) $(OBJ_B)

re: fclean all


# Regla phony
.PHONY: re fclean clean all


