/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:38:51 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/20 19:04:48 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Bureaucrat::Bureaucrat() : name(""), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs.grade;
		if(this->grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if(this->grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}
/*
** --------------------------------- METHODS ----------------------------------
*/
const char * Bureaucrat::GradeTooHighException::what()  const throw() {
	return "Grade Too High !!";
}
const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

void Bureaucrat::increment()
{
	this->grade--;
	if(this->grade < 1)
		throw GradeTooHighException();
}
void Bureaucrat::decrement()
{
	this->grade++;
	if(this->grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

/* ************************************************************************** */