/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/22 18:38:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
class Fixed
{
private:
	
	static const int fraction = 8;
	int fixe; // value; // fractional bit
public:
    /*constractuer*/
	Fixed();
	Fixed(int const nb);
	Fixed(float nb)
	{
		std::cout << "flote constractor"<<std::endl;
		this->fixe = (int)nb;
	}
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