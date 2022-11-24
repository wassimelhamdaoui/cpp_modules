/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:20:06 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 20:14:42 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();

		void makeSound();
		Cat &		operator=( Cat const & rhs );
	private :
		Brain *brain;
};

#endif