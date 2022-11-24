# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 12:40:51 by waelhamd          #+#    #+#              #
#    Updated: 2022/11/10 00:33:38 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

%.o : %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
	