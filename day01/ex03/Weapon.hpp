/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:58:29 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/17 18:53:57 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon 
{
private:
	string type;
public:
	string getType(void) ;
	void setType(string str);
 	Weapon(string str);
	 ~Weapon();
};

#endif