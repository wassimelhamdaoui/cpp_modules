# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 12:27:41 by waelhamd          #+#    #+#              #
#    Updated: 2022/10/09 12:36:59 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean :
		rm -rf $(NAME)

re : clean fclean all
