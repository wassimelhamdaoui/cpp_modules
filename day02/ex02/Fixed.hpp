/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:21:34 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/31 17:36:46 by waelhamd         ###   ########.fr       */
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
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &fixe);
 //accsessor
	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
// operator overloded
	Fixed & operator = (Fixed const &addition);

//opérateur de comparaison

	bool operator <(Fixed const &compar) const;
	bool operator >(Fixed const &compar) const;
	bool operator >=(Fixed const &compar) const;
	bool operator <=(Fixed const &compar) const;
	bool operator ==(Fixed const &compar) const;
	bool operator !=(Fixed const &compar) const;
// opérateurs de arithmétiques
	Fixed  operator +(Fixed const &op) const;
	Fixed  operator -(Fixed const &op) const;
	Fixed  operator *(Fixed const &op) const;
	Fixed  operator /(Fixed const &op) const;
//opérateurs d’incrémentation et de décrémentation
	Fixed	operator ++(void);
	Fixed	operator ++(int);
	Fixed	operator --(void);
	Fixed	operator --(int);
	
	
	 float	toFloat( void ) const;// convertit la valeur en virgule fixe en nombre à virgule flottante.
	 int		toInt( void ) const;// convertit la valeur en virgule fixe en nombre entier.
	
};

std::ostream & operator <<(std::ostream& output, Fixed const &f);

#endif