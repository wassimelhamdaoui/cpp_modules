/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:41:30 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/26 05:34:29 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <vector>
using namespace std;

// //non member attribute and non member function
// //	on parler de variable ou bien fonction de class et non pas d'instance.

// int main(){
// 	Sample instance;
// 	Sample *instancep;//pointeur d'instance
// 	instancep = &instance;
// // syntax d'un pointeur sur un attribut membre de la class sample
// 	int Sample::*p = NULL;// la signefication : pointeur sur un membre de la calss sample
// 	void (Sample::*f)(void)const;//pointeur sur un fonction membre de la class

// 	p = &Sample::foo;

// 	cout << "value of membre foo: " << instance.foo<<endl;
// 	instance.*p = 21;
// 	cout << "value of membre foo: " << instance.foo<<endl;
// 	instancep->*p = 42;
// 	cout << "value of membre foo: " << instance.foo<<endl;

// 	f = &Sample::bar;

// 	(instance.*f)();
// 	(instancep->*f)();
// }
/*
the compailer also add a hidden pointer that is a member  of the base class
which well call vptr 
*/

/*

		template:
				 T is not an actual define type it's not like we create a custom class called T or somting like that

*/