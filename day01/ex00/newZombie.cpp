/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:02:52 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 04:10:20 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *newZombie(string nameofzombie)
{
	Zombie *zombi = new Zombie(nameofzombie);
	return(zombi);
}