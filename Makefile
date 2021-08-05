# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/28 15:10:19 by lgeoffro          #+#    #+#              #
#    Updated: 2021/07/26 05:57:12 by lgeoffro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

LIBFT = libft.a
LIBFT_NAME = ft
LIBFT_DIR = src/libft/

PUSHSWAP = push_swap

CFLAGS = -Wall -Werror -Wextra -I includes/

SRC :=  src/push_swap/main.c \
		src/push_swap/parse_stack.c \
		src/push_swap/utils.c \
		src/push_swap/instructions/swap.c \
		src/push_swap/instructions/push.c \
		src/push_swap/instructions/rotate.c \
		src/push_swap/instructions/reverse_rotate.c \
		src/push_swap/free.c \
		src/push_swap/sort.c \

PUSHSWAP_OBJS := $(SRC:.c=.o)

RM = rm -f

all: $(LIBFT) $(PUSHSWAP)

$(LIBFT):
		make -C $(LIBFT_DIR)

$(PUSHSWAP): $(PUSHSWAP_OBJS)
		$(CC) -o $(PUSHSWAP) $(PUSHSWAP_OBJS) -L $(LIBFT_DIR) -l $(LIBFT_NAME) -fsanitize=address

clean:
		$(RM) $(PUSHSWAP_OBJS)
		make -C $(LIBFT_DIR) clean

fclean: clean
		$(RM) $(PUSHSWAP)
		make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
