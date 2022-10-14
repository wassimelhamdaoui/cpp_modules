/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:44:50 by waelhamd          #+#    #+#             */
/*   Updated: 2022/09/29 04:03:49 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include"contact.hpp"

class PhoneBook{
	private:
		static int count;
		Contact contacts[8];
		int index;
	public:
	//constracture
		PhoneBook();
		~PhoneBook();
		//geters and seters
		Contact getcontact(int _contact);
		void setcontact(Contact _contact);
		int getcount(void);
		// void dispaly_contact(void);
};

#endif