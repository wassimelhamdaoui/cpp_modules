# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 22:27:49 by waelhamd          #+#    #+#              #
#    Updated: 2022/11/10 00:35:10 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = main.cpp Harl.cpp

obj = $(src:.cpp=.o)

name = Harl

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp Harl.hpp
	$(CXX) $(CXXFLAGS) -c $<

all : $(name)

$(name) : $(obj)
	$(CXX) $(CXXFLAGS) $(obj) -o $(name)

clean : $(obj)
	rm -rf $(obj)
fclean : clean
	rm -rf $(name)
re : fclean all