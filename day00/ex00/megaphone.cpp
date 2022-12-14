/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:24:11 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/28 01:51:50 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
	if(ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < ac; i++)
	{
		std::string tab = av[i];
		for(int j=0; j < (int)tab.length(); j++)
			if(islower(tab[j]))
				tab[j] = (char)toupper(tab[j]);
		std::cout << tab + " ";
	}
	std::cout << std::endl;
	return 0;
}
