/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:02:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 04:09:53 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("foo");
	zombie->announce();
	randomChump("bar");
	delete zombie;
	return 0;
}
