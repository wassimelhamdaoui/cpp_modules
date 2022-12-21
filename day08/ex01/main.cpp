/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:48:27 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/29 13:22:25 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<iostream>
#include"Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(-3);
	sp.addNumber(-2);
	sp.addNumber(0);
	sp.addNumber(10);
	sp.addNumber(20);
	
	
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		Span sp2 = Span(1);
		sp2.addNumber(2);
		sp2.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout <<"-------test addsequence--------"<<std::endl;
	std::vector<int> vect;
	for(int i = 0; i < 10; i++)
		vect.push_back(i*10);
	try
	{
		
		Span sp2(10);
		sp2.addSequence(vect.begin(), vect.end());
		sp2.print_content();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}