# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 17:11:17 by ropkyns           #+#    #+#              #
#    Updated: 2023/11/27 00:03:01 by ropkyns          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c


OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

.c.o: 
		$(CC) -I. $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):		$(OBJS)
				ar rcs $(NAME) $?
				ranlib $(NAME)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
