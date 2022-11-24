/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:24:26 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/19 14:36:39 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"

int main()
{
	Animal* animals[10];
	// Animal *n = new Animal();
	
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for(int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		
	}
	for(int i =0; i<10; i++)
	{
		delete animals[i];
	}
	// system("leaks animal");
	return 0;
}