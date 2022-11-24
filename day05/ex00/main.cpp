/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:36:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/19 18:41:55 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{

	Bureaucrat A("wassim", 1);
	try
	{
		A.increment();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << A;

	Bureaucrat B("elhamdoui", 150);
	try
	{
		B.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B;
	
}