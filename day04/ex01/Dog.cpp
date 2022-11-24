/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:11:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/21 15:59:42 by waelhamd         ###   ########.fr       */
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
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called " << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called "<< std::endl;
	delete brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &		Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
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