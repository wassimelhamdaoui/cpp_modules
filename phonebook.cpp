/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:40:53 by waelhamd          #+#    #+#             */
/*   Updated: 2022/09/29 04:03:57 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

// PhoneBook::dispaly_contact(){
// 	for(int i=0; i < this->index, i++)
// 	{
// 		cout << Contact::get_first_name <<
// 	}
// }

PhoneBook::PhoneBook(): index(0){
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

int PhoneBook::count= 0;
