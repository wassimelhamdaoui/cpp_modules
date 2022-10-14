/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:37:46 by waelhamd          #+#    #+#             */
/*   Updated: 2022/09/29 03:42:17 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
using std::string;

class Contact{
	private:
        string _first_name;
        string _last_name;
        string _nickname;
        string _phone_number;
        string _darkest_secret;
	public:
		// constucter
		 Contact();
		// destracteur
		 ~Contact();
		//geters and setters for all variable
		string get_first_name(void);
		string get_last_name(void);
		string get_nickname(void);
		string get_phone_number(void);
		string get_darkest_secret(void);
		//constractuor to intialis all variable
		void set_first_name(string first_name);
		void set_last_name(string last_name);
		void set_nickname(string nickname);
		void set_phone_number(string phone_number);
		void set_darkest_secret(string darkest_secret);
};
#endif