/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:40:42 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/31 17:59:06 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Fixed.hpp"

/*
we can make opreators work user defined classes this means
has the ability to provide the operators with a special meaning for a data type
this ability is known as operator overloding, we can overload an operator in a class like string
so that we van concatenate two strings


*/
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	 std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	 std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}