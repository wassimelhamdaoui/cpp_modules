# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 09:14:38 by waelhamd          #+#    #+#              #
#    Updated: 2022/10/09 12:37:27 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = phonebook.cpp contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS) phonebook.hpp contact.hpp
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : clean fclean all
	