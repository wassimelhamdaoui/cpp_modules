/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:36:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/21 18:06:06 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{

	{
        Bureaucrat bureaucrat("aaaaaaaaa", 115);
        ShrubberyCreationForm shrubbery("home");
        std::cout << std::endl;
        bureaucrat.executeForm(shrubbery);
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
        std::cout << std::endl;
    }


    {
        Bureaucrat bureaucrat("bbbbbbbbb", 10);
        PresidentialPardonForm autoRoute("autoroute");
        bureaucrat.signForm(autoRoute);
        bureaucrat.executeForm(autoRoute);
        std::cout << std::endl;
    }


    {
        std::cout << std::endl;
        Bureaucrat bureaucrat("ccccccccc", 1);
        RobotomyRequestForm robot("randomForm");
        bureaucrat.signForm(robot);
        bureaucrat.executeForm(robot);
        std::cout << std::endl;
    }
	return 0;
}