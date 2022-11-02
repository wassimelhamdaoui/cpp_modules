/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:58:57 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 12:13:49 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(string name, Weapon &Human): name(name), Human(Human)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const{
	cout <<this->name<<" attacks with their "<<this->Human.getType()<<endl;
}