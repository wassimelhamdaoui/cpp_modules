/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:57:50 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/24 21:50:40 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name(""), _signe(false), grade_signe(150), grade_exec(150)
{
}

Form::Form(std::string _name, int const _grade_signe, int const _grade_exec)
	: name(_name), _signe(false), grade_signe(_grade_signe), grade_exec(_grade_exec)
{
	if(grade_signe < 1 || grade_exec < 1)
		throw GradeTooHighException();
	else if (grade_signe > 150 || grade_exec > 150)
		throw GradeTooLowException();
}

Form::Form( const Form & src )
	 : name(src.name), _signe(src._signe), grade_signe(src.grade_signe), grade_exec(src.grade_exec)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signe = rhs._signe;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o <<"Form "<< i.getName() <<": signed: "<<std::boolalpha << i.getSigne()<<", gradeSign: "<< i.getGradeSign()<<", gradeExec: "<< i.getGradeExec();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Form::beSigned(Bureaucrat &candidat)
{
	if(this->_signe == false)
	{
		if(candidat.getGrade() <= this->grade_signe)
			this->_signe = true;
		else
			throw GradeTooLowException();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int Form::getGradeSign() const
{
	return this->grade_signe;
}

int Form::getGradeExec() const
{
	return this->grade_exec;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getSigne() const
{
	return this->_signe;
}

/* ************************************************************************** */