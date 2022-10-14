/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:02:26 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 04:07:18 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include<iostream>

using std::cout;
using std::string;
using std::endl;

class Zombie{

	private :
		string name;
	public :
		 Zombie(string nameofzombie);
		~Zombie();
		void announce(void);
};

Zombie *newZombie(string nameofzombie);
void randomChump(string nameofzombie);

#endif
