/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:42:21 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/16 13:24:40 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(5,"foo");
	for(int i =0; i < 5; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}