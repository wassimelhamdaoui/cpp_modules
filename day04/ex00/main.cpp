/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:24:26 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 13:26:06 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"

int main()
{
	Animal *meta = new Animal();
	Animal *j = new Dog();
	Animal *i = new Cat();

	std::cout << j->getType() << " "<<std::endl;
	std::cout << i->getType() << " "<<std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
//makesound dose not override cause it's non virtual
std::cout << "=====================test of WrongCat sound====================="<<std::endl;
	WrongAnimal *Wrong = new WrongAnimal();
	WrongAnimal *cat = new WrongCat();

	std::cout << Wrong->getType() << " "<<std::endl;
	std::cout << cat->getType() << " "<<std::endl;

	Wrong->makeSound();
	cat->makeSound();
	delete Wrong;
	delete cat;
	return 0;
}