/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 03:47:56 by waelhamd          #+#    #+#             */
/*   Updated: 2022/09/29 07:01:05 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"
#include"phonebook.hpp"
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::left;
using std::setw;

void display_header(void){
		cout << "+----------+----------+----------+----------+" << endl;
		cout << "|" << setw(10) << left << "index";
		cout << "|" << setw(10) << left << "first name";
		cout << "|" << setw(10) << left << "last name";
		cout << "|" << setw(10) << left << "nickname" << "|" << endl;
		cout << "|----------|----------|----------|----------|" << endl;
}

string value_of(string buff) {
	string ret;
	cout << buff << ": ";
	getline(cin, ret);
	if (!(std::cin.good()))
	{
		cout << "exiting..." << endl;
		exit(0);
	}
	return ret;
}

int main()
{
	PhoneBook phonebook;
	cout << "Command info: " << endl;
	cout << "             -ADD: add a contact to the phonebook" << endl;
	cout << "             -SEARCH: search for a contact in the phonebook" << endl;
	cout << "             -EXIT: quit the program" << endl;
		string command;
	while(command != "EXIT")
	{
		cout << endl << "Enter a command: ";
		getline(cin, command);
		if (!(cin.good())) {
			cout << "CTRL+D pressed" << endl;
			cout << "exiting..." << endl;
			exit(0);
		}
		if(command == "ADD"){
			Contact contact;
			contact.set_first_name(value_of("First name"));
			contact.set_last_name(value_of("Last name"));
			contact.set_nickname(value_of("Nickname"));
			contact.set_phone_number(value_of("Phone number"));
			contact.set_darkest_secret(value_of("Darkest secret"));
			phonebook.setcontact(contact);
		}
		if(command == "SEARCH"){
				int count;
				int index;
				count = phonebook.getcount();
				display_header();
				for(int i = 0; i < phonebook.getcount(); i++){
					Contact contact;
					contact = phonebook.getcontact(i);
					cout << "|" << setw(10)<<i+1;
					cout << "|" << setw(10)<<contact.get_first_name();
					cout << "|" << setw(10)<<contact.get_last_name();
					cout << "|" << setw(10)<<contact.get_nickname() << "|" << endl;
				}
				if(count > 0)
				{
					cout << "enter an index to show information :";
					cin >> index;cin.ignore();
					while ((index < 1 || index > count)){
						std::cout << "index must be ( 1 <= index >="<< count << " ) : ";
						cin >> index;cin.ignore();
					}
					// 	std::cout << "exiting..." << std::endl;
					// 	exit(0);
					// }	
					Contact account;
					account = phonebook.getcontact(index-1);
					cout << endl;
					cout <<setw(15) <<"First name" <<"->"<<account.get_first_name() << endl;
					cout <<setw(15) <<"Last name" <<"->"<<account.get_last_name() << endl;
					cout <<setw(15) <<"Nickname"<<"->"<<account.get_nickname() << endl;
					cout <<setw(15) <<"Phone number" <<"->"<<account.get_phone_number() << endl;
					cout <<setw(15) <<"Darkest secret" <<"->"<<account.get_darkest_secret() << endl;
				}
		}
		
	}
	
	return (0);
}