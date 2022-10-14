# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 04:10:51 by waelhamd          #+#    #+#              #
#    Updated: 2022/10/11 04:40:53 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)
RM = rm -rf
NAME = zombie

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

all : $(NAME)
	
$(NAME) : $(OBJ) $(Zombie.hpp)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : clean fclean all
		