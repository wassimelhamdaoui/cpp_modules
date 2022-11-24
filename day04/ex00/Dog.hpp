/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:11:35 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 11:31:44 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(std::string type);
		Dog( Dog const & src );
		~Dog();

		void makeSound();
		Dog &		operator=( Dog const & rhs );

};

#endif