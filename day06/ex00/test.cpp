/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:50:30 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/24 04:52:41 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string.h>
using namespace std;

/*
convertion type :
				cast implicite int ex :a = b;
				cast explecite int ex :a = (int) b;
type renterpretion :

on a 5 action de cast possible :
								les convertion
								les reinterpretation
								les changement de type qualifer
								les down cast
								les up cast
									
					
*/

class parant {};
class child1 : public parant {};
class child2 : public parant {};
class unrelated {};

int main()
{
	child1 child11111;
	
	parant *parant1 = &child11111;
	child2 *child2222 = static_cast<child2 *>(parant1);
	
	// // parant *a3 = &b;
	
	// // child1 *b1 = a1;
	// child2 *c1 = static_cast<child2 *>(a1);
	// child2 *c1 = (child2 *)a3;

};