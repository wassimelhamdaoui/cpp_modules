/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:01:48 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 04:08:56 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(string nameofzombie)
{
	this->name = nameofzombie;
}

Zombie::~Zombie()
{
	cout << this->name << ": le zombie est détruits" << endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}