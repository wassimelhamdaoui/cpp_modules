/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:40:53 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/28 02:34:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"


PhoneBook::PhoneBook(): count(0), index(0){
	return;
}

PhoneBook::~PhoneBook(){
	return;
}

Contact PhoneBook::getcontact(int index){
	return this->contacts[index];
}

void PhoneBook::setcontact(Contact _contact){
	this->contacts[this->index] = _contact;
	count = (count < 8) ? count+1 : count;
	this->index = (this->index + 1) % 8;
	return;
}

int	PhoneBook::getcount(){
	return this->count;
}

