# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 21:14:03 by tcarvalh          #+#    #+#              #
#    Updated: 2022/07/10 19:21:24 by tcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c ft_printhex.c ft_printnbr.c ft_printpointer.c \
				ft_printstr.c ft_printuint.c
			
OBJS		= $(SRCS:.c=.o)

CC			= clang
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f
NAME		= libftprintf.a

LIBFT		= libft.a
LIBFT_PATH	= ./libft/

all:	$(LIBFT) $(NAME)

$(NAME): $(OBJS)
		cp $(LIBFT_PATH)/$(LIBFT) $(NAME)
		ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c -I$(LIBFT_PATH) -o $@ $<

$(LIBFT):	
			@make -C $(LIBFT_PATH)

clean:
		@make -C $(LIBFT_PATH) clean
		$(RM) $(OBJS)

fclean:
		@make -C $(LIBFT_PATH) fclean
		$(RM) $(OBJS)
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re