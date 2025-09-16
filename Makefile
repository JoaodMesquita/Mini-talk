# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/15 10:05:57 by joapedro          #+#    #+#              #
#    Updated: 2025/09/15 10:15:50 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
CLIENT_NAME = client

SRC = src/server.c
CLIENT_SRC = src/client.c 
OBJS := $(SRC:%.c=%.o)
CLIENT_OBJS := $(CLIENT_SRC:%.c=%.o)

CC = cc
RM = rm -f

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g


all: $(LIBFT) $(NAME) $(CLIENT_NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(CLIENT_NAME): $(CLIENT_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o $(CLIENT_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft/ clean
	$(RM) $(OBJS) $(CLIENT_OBJS)

fclean: clean
	$(RM) $(NAME) $(CLIENT_NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re