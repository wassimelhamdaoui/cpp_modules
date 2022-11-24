/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:58:46 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/09 22:35:18 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
	std::string command;
	if(ac != 2)
	{
		std::cout << "./HarlFilter <COMMENT>" << std::endl;
		return 0;
	}
	command = av[1];
	for(int i = 0; i < command.length(); i++)
		command[i] = (char)tolower(command[i]);
	
	Harl().complain(command);
}