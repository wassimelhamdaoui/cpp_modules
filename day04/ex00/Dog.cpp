/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:11:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 11:17:24 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}
Dog::Dog(std::string type)
{
	std::cout << "Dog parametre constractor called"<<std::endl;
	this->type = type;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called " << std::endl;
	this->type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called "<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &		Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound()
{
	std::cout << "Bark" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */