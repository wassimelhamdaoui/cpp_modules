/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/30 07:08:47 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
class Fixed
{
private:
	int fixe; // value
	static const int fraction = 8; // fractional bit
public:
    /*constractuer*/
	Fixed();
	// Fixed(int const nb);
	// Fixed(double const nb);
	Fixed(Fixed const &fixe);
	/* destracteur*/
	~Fixed();
	/* accessors*/
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	/*operateur overload*/
	Fixed & operator=(Fixed &addition);
};


/*
look at double to tixed point and vice versa

integer to fixed point and reading  the fractional part

adding and subtracting

epsilon

*/
#endif