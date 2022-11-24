/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:43:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/21 02:46:35 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), target("Defualt")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
        : AForm("Robotomy", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::Action() const
{
    static int cote;

    std::cout << "this action from Robotomy : ";
    if(!cote)
        std::cout << target << "has been robotomized" << std::endl;
    else
        std::cout << " the robotomy failed" << std::endl;
    cote = !cote;
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string RobotomyRequestForm::getTarget() const
{
	return this->target;	
}

/* ************************************************************************** */