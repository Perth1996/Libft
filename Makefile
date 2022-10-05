# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 08:42:31 by plawkiat          #+#    #+#              #
#    Updated: 2022/09/29 07:15:25 by plawkiat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

W = -Wall -Wextra -Werror
//Declaration
NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
       ft_tolower.c ft_toupper.c ft_bzero.c ft_memset.c ft_memchr.c\
       ft_memcmp.c ft_memmove.c ft_memcpy.c ft_strlen.c ft_strchr.c\
       ft_strrchr.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c\
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
       ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c\
       	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
//Command
OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

all:	$(NAME)
//target file : dependency file
%o: %c
	gcc $(w) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

bonus:	$(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)
//tell that what are the command in Makefile
.PHONY: clean fclean all re bonus
