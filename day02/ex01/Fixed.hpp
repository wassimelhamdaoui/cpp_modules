/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/15 18:33:16 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
private:
	static const int fraction = 8; // fractional bit
	int fixe; // value
public:
		Fixed();
		~Fixed();
		Fixed(int const nb);// convert to fixed point ***********
		Fixed(float const nb);//convert  to fixed point ********
		Fixed(Fixed const &fixe);
	/* accessors*/
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	/*operateur overload*/
	Fixed & operator = (Fixed const &addition);
	
	 float	toFloat( void ) const;// convertit la valeur en virgule fixe en nombre à virgule flottante.
	 int		toInt( void ) const;// convertit la valeur en virgule fixe en nombre entier.
	
};

std::ostream & operator << (std::ostream& output, Fixed const &f);

#endif