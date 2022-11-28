/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 06:35:21 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/26 08:56:55 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
#include<iostream>



int main()
{
	std::string array[] = {"hello", "world","from","khouribga"};
	int tab[] = {1,2,3,4,5};

	iter(array, 4, printer);
	iter(tab, 5, printer);
	return 0;
}