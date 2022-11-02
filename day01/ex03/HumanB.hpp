/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:59:43 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 13:45:04 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include"Weapon.hpp"

class HumanB
{
private:
	string name;
	Weapon *Human;
public:
	HumanB(string str);
	~HumanB();
	void setWeapon(Weapon &human);
	void attack(void);
};

#endif