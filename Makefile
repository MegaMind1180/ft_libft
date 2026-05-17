# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/17 17:10:37 by wmezgoli          #+#    #+#              #
#    Updated: 2026/05/17 17:10:39 by wmezgoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 

# ^sagt dem pc welchen Compiler er benutzen soll(in diesem fall cc) und mit welchen -flags er compilieren soll(42norm flags)ˆ
















NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJECTS = $(SOURCES:.c=.o)


# ˆdefiniert "variablen" ˆ
















#    Rules:



all: $(NAME)

# ^ "all" ist IMMER der standart Startpunkt des Makefile




$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# ^sagt was alles benötigt wird/gemacht werden muss um $NAME(libft.a) zu "bauen"




%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

# ^definiert was gemacht werden muss damit aus .c files .o files werden




clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# ^definiert "cleanup"
#
#
# Bsp.:  make clean     <-löscht alle .o files
# 		 make fclean	<-führt zuerst ^clean^ aus und löscht danach $NAME(libft.a)
# 		 make re		<-führt fclean aus und danach das Makefile von anfang neu












.PHONY: all clean fclean re bonus
