/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:43:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/21 02:46:35 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5), target("Defualt")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
        : AForm("Presidential", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm(src), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void PresidentialPardonForm::Action() const
{
   std::cout << "this action from Presidential : "<<target<<" has been pardoned by Zaphod Beeblebrox";
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::getTarget() const
{
	return this->target;	
}

/* ************************************************************************** */