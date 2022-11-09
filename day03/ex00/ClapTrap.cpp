/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:08:13 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/07 01:10:35 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : Hitpoints(10), Energypoints(10), Attackdamage(0), name("")
{
	std::cout << "Defualt constractor called" <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	std::cout << "Parameterized constractor called" <<std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destractor called" <<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &object)
{
	std::cout << "copy constractor called" <<std::endl;
	this->name = object.name;
	this->Hitpoints = object.Hitpoints;
	this->Energypoints = object.Energypoints;
	this->Attackdamage = object.Attackdamage;
}

ClapTrap & ClapTrap::operator =(ClapTrap const &object)
{
	std::cout << "assingnement operator called" << std::endl;
	*this = object;
	return *this;
}
//clap attack the target the target lose hitpoint and the clap lose one energypoint
void ClapTrap::attack(const std::string& target)
{
	if(this->Hitpoints > 0 && this->Energypoints > 0)
	{
		std::cout << "ClapTrap "<< this->name << " attacks " << target << " , causing " << this->Attackdamage << " points of damage!" << std::endl;
		this->Energypoints--;
	}
}

// clap takedamage the clap lose 

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->Hitpoints > 0 && this->Energypoints > 0)
	{
		std::cout << this->name << " lose " << amount << " of hitpoint!" <<std::endl;
		this->Hitpoints -= amount;
		if(this->Hitpoints < 0)
			this->Hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Hitpoints > 0 && this->Energypoints > 0)
	{
		std::cout << this->name << " get " << amount <<" of hitpoint!" <<std::endl;
		this->Hitpoints +=amount;
		this->Energypoints--;
	}
}