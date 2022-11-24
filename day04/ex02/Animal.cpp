/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:38:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 20:52:28 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//** ------------------------------- CONSTRUCTOR --------------------------------

Animal::Animal() : type("Animal")
{
	std::cout << "Animal defualt constractor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal parametre constractor called\n";
}

Animal::Animal( const Animal & src )
{
	
	std::cout << "Animal copy constractor called" << std::endl;
	this->type = src.type;
}

//** -------------------------------- DESTRUCTOR --------------------------------

Animal::~Animal()
{
	std::cout << "Animal destractor called" << std::endl;
}

//** --------------------------------- OVERLOAD ---------------------------------

Animal &	Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::string Animal::getType()
{
	return this->type;
}

