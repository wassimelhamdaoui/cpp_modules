/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:59:27 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 12:16:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(string str): Human(NULL)
{
	this->name = str;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &human){
	this->Human = &human;
}

void HumanB::attack() {
	if(this->Human == NULL)
		cout << this->name << " attacks with :D" << endl;
	else
		cout <<this->name<<" attacks with their "<<this->Human->getType() << endl;
}