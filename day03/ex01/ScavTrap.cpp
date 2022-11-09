/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:16:18 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/08 22:40:39 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//** ------------------------------- CONSTRUCTOR --------------------------------
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constractor called" << std::endl;
	this->name = "";
	this->Attackdamage = 20;
	this->Energypoints = 50;
	this->Hitpoints = 100;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap parametrized constractor called" << std::endl;
	this->name = name;
	this->Attackdamage = 20;
	this->Energypoints = 50;
	this->Hitpoints = 100;
}

ScavTrap::ScavTrap( const ScavTrap & object )
{
	std::cout << "ScavTrap copy constractor called" <<std::endl;
	this->name = object.name;
	this->Hitpoints = object.Hitpoints;
	this->Energypoints = object.Energypoints;
	this->Attackdamage = object.Attackdamage;
}


//** -------------------------------- DESTRUCTOR --------------------------------

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destractor called" <<std::endl;
}
//** --------------------------------- OVERLOAD ---------------------------------

ScavTrap &	ScavTrap::operator=( ScavTrap const & obj )
{
	if ( this != &obj )
	{
		std::cout << "ScavTrap assingnement operator called" << std::endl;
		*this = obj;
		return *this;
	}
	return *this;
}

//** --------------------------------- METHODS ----------------------------------
void ScavTrap::attack(const std::string& target)
{
	if(this->Hitpoints > 0 && this->Energypoints > 0)
	{
		std::cout << "ScavTrap "<< this->name << " attacks " << target << " , causing " << this->Attackdamage << " points of damage!" << std::endl;
		this->Energypoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout<< "guardGate activate for " << this->name << std::endl;
}