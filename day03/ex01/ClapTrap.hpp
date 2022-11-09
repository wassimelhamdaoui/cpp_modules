/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:08:26 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/08 22:37:20 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

 class ClapTrap
 {
	protected :
		std::string name;
		int Hitpoints;
		int	Energypoints;
		int	Attackdamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		//copy constractor
		ClapTrap(ClapTrap const &object);
		~ClapTrap();
		//assingnement operator
		ClapTrap &operator =(ClapTrap const &object);
		//member fonction
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
 };

 #endif