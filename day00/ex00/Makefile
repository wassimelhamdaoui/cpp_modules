# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 12:27:41 by waelhamd          #+#    #+#              #
#    Updated: 2022/10/28 02:00:40 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++ -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean :  clean
	rm -rf $(NAME)

re : clean fclean all
