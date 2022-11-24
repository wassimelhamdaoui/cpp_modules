/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:44:58 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 14:22:53 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain constractor called\n";
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "no ideas";
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constractor called\n";
	for(int i=0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout <<"Brain destractor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i=0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string &Brain::getideas(int index)
{
	return this->ideas[index];
}


/* ************************************************************************** */