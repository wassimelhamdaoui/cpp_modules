/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:49:34 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 11:13:03 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Zombie{

	private :
		string name;
	public :
		 Zombie();
		~Zombie();
		void set_name(string name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
#endif