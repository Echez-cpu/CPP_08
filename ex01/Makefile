# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 13:41:26 by pokpalae          #+#    #+#              #
#    Updated: 2025/02/27 13:41:28 by pokpalae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/main.cpp ./srcs/Span.cpp
NAME = span
OBJ_DIR = obj
OBJ = $(patsubst ./srcs/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./srcs/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
