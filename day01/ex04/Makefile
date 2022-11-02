# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:43:03 by waelhamd          #+#    #+#              #
#    Updated: 2022/10/27 22:46:51 by waelhamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = main.cpp

obj = $(src:.cpp=.o)

name = replace

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(name)

$(name) : $(obj)
	$(CXX) $(CXXFLAGS) $(obj) -o $(name)

clean : $(obj)
	rm -rf $(obj)
fclean : clean
	rm -rf $(name)
re : all clean fclean
	
		
	
