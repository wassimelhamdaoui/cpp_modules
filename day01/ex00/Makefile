# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 04:10:51 by waelhamd          #+#    #+#              #
#    Updated: 2022/11/10 00:33:45 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)
RM = rm -rf
NAME = zombie

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)
	
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re :fclean all
		