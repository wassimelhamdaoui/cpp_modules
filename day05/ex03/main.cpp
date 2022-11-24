/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:36:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/22 17:07:16 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"Intern.hpp"

int main()
{

    Bureaucrat foo("foo", 5);
    Bureaucrat bar("bar", 45);
    Bureaucrat foobar("foobar", 137);
    Intern intern;

    AForm *form1;
    AForm *form2;
    AForm *form3;
    std::cout <<"---------create forms-----------" <<std::endl;
    try
    {
        form1 = intern.makeForm("shrubbery creation", "1337");
        form2 = intern.makeForm("robotomy request", "1338");
        form3 = intern.makeForm("presidential pardon", "1339");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout <<"----------singe the form----------"<<std::endl;
    foo.signForm(*form1);
    bar.signForm(*form2);
    foobar.signForm(*form3);
    std::cout << "---------execute the form--------"<<std::endl;
    foo.executeForm(*form1);
    bar.executeForm(*form2);
    foobar.executeForm(*form3);
	return 0;
}