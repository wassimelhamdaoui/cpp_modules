/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:55:01 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/07 01:11:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap claper("wassim");
	claper.attack("elhamdaoui");
	claper.takeDamage(1);
	claper.beRepaired(2);
	return 0;
}