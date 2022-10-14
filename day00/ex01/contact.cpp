/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:42:37 by waelhamd          #+#    #+#             */
/*   Updated: 2022/09/29 03:43:51 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

string Contact::get_first_name(void){
	return this->_first_name;
}
string Contact::get_last_name(void){
	return this->_last_name;
}
string Contact::get_nickname(void){
	return this->_nickname;
}
string Contact::get_phone_number(void){
	return this->_phone_number;
}
string Contact::get_darkest_secret(void){
	return this->_darkest_secret;
}

void Contact::set_first_name(string first_name){
	this->_first_name = first_name;
		return ;
}
void Contact::set_last_name(string last_name){
	this->_last_name = last_name;
}
void Contact::set_nickname(string nickname){
	this->_nickname = nickname;
}
void Contact::set_phone_number(string phone_number){
	this->_phone_number = phone_number;
}
void Contact::set_darkest_secret(string darkest_secret){
	this->_darkest_secret = darkest_secret;
}
Contact::Contact(){
	return;
}
Contact::~Contact(){
	return;
}