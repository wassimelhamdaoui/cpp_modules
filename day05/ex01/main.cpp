/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:36:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/22 00:14:15 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{

	Bureaucrat test1("wassim", 100);
	Form form("formule", 50, 50);
std::cout << "---------------test1--------------"<<std::endl;
	try
	{
		form.beSigned(test1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test1.signForm(form);
	
std::cout << "---------------test2--------------"<<std::endl;
	Bureaucrat test2("wassim", 10);
	try
	{
		form.beSigned(test2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	test2.signForm(form);
	
	return 0;
}