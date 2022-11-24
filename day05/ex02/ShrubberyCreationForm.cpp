/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:43:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/21 17:01:30 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), target("Defualt")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
        : AForm("shrubbery",145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::Action() const
{

	std::ofstream outfile(target + "_shrubbery");
	if (outfile.is_open() == 0){
            std::cout << "error: cannot open file" << std::endl;
        return;
    }
    std::cout << "this action from Shrubbery : tree created successfully to : "<< this->target << std::endl;
	outfile << "\t\t\t\t\t\t          ,@@@@@@@,\n\
            ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
        %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
        %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
        `&%\\ ` /%&'    |.|        \\ '|8'\n\
            |o|        | |         | |\n\
            |.|        | |         | |\n\
         \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;	
}

/* ************************************************************************** */