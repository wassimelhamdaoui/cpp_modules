/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 00:32:42 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/27 03:39:18 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"


int main()
{
	std::cout<<"------test for int------"<<std::endl;
	Array<int> str(5);
	for(int i=0; i < 5; i++)
		str[i] = i;
		
    for (unsigned int i = 0; i < str.size(); i++)
        std::cout << str[i] << std::endl;

	std::cout<<"------test for int------"<<std::endl;
	Array<std::string> tab(5);
	tab[0] = "aaa";
	tab[1] = "bbb";
	tab[2] = "ccc";
	tab[3] = "ddd";
	tab[4] = "eee";
	for(unsigned int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}