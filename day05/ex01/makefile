# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 10:04:52 by waelhamd          #+#    #+#              #
#    Updated: 2022/11/19 22:44:22 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)
RM = rm -rf
NAME = Bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp Bureaucrat.hpp Form.hpp
	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)
	
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re :fclean all