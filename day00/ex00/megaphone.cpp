/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:24:11 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/09 12:40:21 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
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




























// deferance entre class and struct c'est que
//-le scoope par defult de class est prive;
// mais sur un struct c'est public