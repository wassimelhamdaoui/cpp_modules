/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:55:01 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/02 21:13:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

 class ClapTrap
 {
	private :
		std::string name;
		int Hitpoints;
		int	Energypoints;
		int	Attackdamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		//copy constractor
		ClapTrap(ClapTrap const &object);
		//assingnement operator
		ClapTrap &operator =(ClapTrap const &object);
		//member fonction
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
 }

ClapTrap::ClapTrap() : Hitpoints(10), Energypoints(10), Attackdamage(0), name("")
{
	std::cout << "Defualt constractor called" <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : Hitpoints(10), Energypoints(10), Attackdamage(0), name(name)
{
	std::cout << "constractor called" <<std::endl;
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

void ClapTrap::attack(const std::string& target)
{
	if(this->Hitpoints > 0 && this->Energypoints > 0)
	{
		std::cout << "ClapTrap "<< this->name << " attacks " << target;
		std::cout << " , causing " << this->Attackdamage << " points of damage!" << st::endl;
		this->Energypoints--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->Hitpoints > amount)
	{
		this->Hitpoints -= amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	
}