/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:03:19 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 04:41:18 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void randomChump(string nameofzombie)
{
	Zombie zombi = Zombie(nameofzombie);
	zombi.announce();
}