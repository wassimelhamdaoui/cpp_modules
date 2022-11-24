/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:57:50 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/20 20:25:15 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : name(""), _signe(false), grade_signe(150), grade_exec(150)
{
}

AForm::AForm(std::string _name, int const _grade_signe, int const _grade_exec)
	: name(_name), _signe(false), grade_signe(_grade_signe), grade_exec(_grade_exec)
{
	if(grade_signe < 1 || grade_exec < 1)
		throw GradeTooHighException();
	else if (grade_signe > 150 || grade_exec > 150)
		throw GradeTooLowException();
}

AForm::AForm( const AForm & src )
	 : name(src.name), _signe(src._signe), grade_signe(src.grade_signe), grade_exec(src.grade_exec)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signe = rhs._signe;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o <<"AForm "<< i.getName() <<": signed: "<<std::boolalpha << i.getSigne()<<", gradeSign: "<< i.getGradeSign()<<", gradeExec: "<< i.getGradeExec();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void AForm::beSigned(Bureaucrat &candidat)
{
	if(this->getSigne() == false)
	{
		if(candidat.getGrade() <= this->getGradeSign())
			this->setSigne(true);
		else
			throw GradeTooLowException();
	}else
		std::cout <<"already signed" << std::endl;
}

void AForm::execute(const Bureaucrat& executor) const
{
	if(!this->getSigne())
		throw FormNotSignedException();
	if(executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else
		Action();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int AForm::getGradeSign() const
{
	return this->grade_signe;
}

int AForm::getGradeExec() const
{
	return this->grade_exec;
}

std::string AForm::getName() const
{
	return this->name;
}

bool AForm::getSigne() const
{
	return this->_signe;
}

void AForm::setSigne(bool _signe)
{
	this->_signe = _signe;
}

/* ************************************************************************** */