/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:49:44 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/16 17:03:14 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
	ScavTrap scav("wassim");
	scav.attack("elhamdaoui");
	scav.guardGate();
	return 0;
}