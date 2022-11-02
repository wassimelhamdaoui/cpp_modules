/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:58:13 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 13:41:15 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(string str): type(str)
{
}

Weapon::~Weapon()
{
}

string Weapon::getType(void) {
	return(this->type);
}

void Weapon::setType(string str){
	this->type = str;
}