/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:19:17 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/16 17:01:04 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = "";
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap parametere constructor called" << std::endl;
	this->name = name;
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "FragTrap copy constructor called " << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap assingnement operator called" << std::endl;
	this->name = obj.name;
	this->Hitpoints = obj.Hitpoints;
	this->Energypoints = obj.Energypoints;
	this->Attackdamage = obj.Attackdamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called "<< std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->name;
	if (this->Energypoints > 0)
	{
		this->Energypoints--;
		std::cout << " attacked " << target << ", causing " << this->Attackdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << " has too little energy points to attack." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " would like to high five everyone!" << std::endl;
}