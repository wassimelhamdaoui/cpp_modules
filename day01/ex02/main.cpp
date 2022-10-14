/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:08:18 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 05:25:59 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using std::string;
using std::cout;
using std::endl;

int main(){
	string foo = "HI THIS IS BRAIN";
	string *stringPTR = &foo;
	string &stringREF = foo;
	//print les adresse
	cout <<"L’adresse de la string en mémoire :"<< &foo      <<endl;
	cout <<"L’adresse stockée dans stringPTR  :"<< stringPTR <<endl;
	cout <<"L’adresse stockée dans stringREF  :"<< &stringREF<<endl;
	//print le valeur
	cout <<"La valeur de la string          :"<< foo << endl;
	cout <<"La valeur pointée par stringPTR :"<< *(stringPTR)<<endl;
	cout <<"La valeur pointée par stringREF :"<< stringREF << endl;
	return 0;
}