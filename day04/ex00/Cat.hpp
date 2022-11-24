/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:20:06 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 13:04:42 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{

	public:

		Cat();
		Cat(std::string type);
		Cat( Cat const & src );
		~Cat();

		void makeSound();
		Cat &		operator=( Cat const & rhs );

};


#endif