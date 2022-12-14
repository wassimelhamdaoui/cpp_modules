/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:40:52 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/29 13:30:10 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
#include<list>


int main()
{
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	try
	{
		std::cout<<easyfind(vect, 10)<<'\n';
		std::cout<<easyfind(vect, 30)<<'\n';
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::list<int> t_list;
	t_list.push_back(22);
	t_list.push_back(11);
	try
	{
		std::cout<<easyfind(t_list, 22)<<'\n';
		std::cout<<easyfind(t_list, 33)<<'\n';
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}