# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 10:04:52 by waelhamd          #+#    #+#              #
#    Updated: 2022/11/18 19:44:11 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)
RM = rm -rf
NAME = animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp Dog.hpp Cat.hpp Animal.hpp Brain.hpp
	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)
	
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re :fclean all