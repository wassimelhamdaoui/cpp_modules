/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:49:44 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/16 17:00:15 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main()
{
	ScavTrap scav("wassim");
	FragTrap frag("rigor");
	std::cout << "==========\n";
	frag.attack("ma3ert");
	std::cout << "==========\n";
	frag.highFivesGuys();
	std::cout << "==========\n";
	return 0;
}