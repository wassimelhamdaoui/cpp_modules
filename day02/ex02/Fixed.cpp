/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/15 12:20:11 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"


Fixed::Fixed()
{
	this->fixe = 0;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(Fixed const &nb)
{
	this->fixe = nb.getRawBits();
}

Fixed::Fixed(int const nb)
{
	this->fixe = (nb << this->fraction);
}

Fixed::Fixed(float const nb)
{
	this->fixe = (int)round(nb * (float)(1 << this->fraction));
}

float Fixed::toFloat( void ) const
{
	return((float)(this->fixe / (float)(1 << this->fraction)));
}

int Fixed::toInt( void ) const
{
	return(this->fixe >> this->fraction);
}

int Fixed::getRawBits(void) const
{
	return this->fixe;
}

void Fixed::setRawBits(int const raw)
{
	this->fixe = raw;
	return ;
}

Fixed & Fixed::operator = (Fixed const &addition)
{
	this->fixe = addition.getRawBits();
	return *this;
}

std::ostream & operator << (std::ostream &output, Fixed const &f)
{
	output << f.toFloat();
	return(output);
}

//opérateur de comparaison
bool Fixed::operator <(Fixed const &compar) const
{
 	if(this->fixe < compar.getRawBits())
		return true;
	return false;
}

bool Fixed::operator >(Fixed const &compar) const
{
	if(this->fixe > compar.getRawBits())
		return true;
	return false;
}

bool Fixed::operator >=(Fixed const &compar) const
{
	if(this->fixe >= compar.getRawBits())
		return true;
	return false;
}

bool Fixed::operator <=(Fixed const &compar) const
{
	if(this->fixe <= compar.getRawBits())
		return true;
	return false;
}

bool Fixed::operator ==(Fixed const &compar) const
{
	if(this->fixe == compar.getRawBits())
		return true;
	return false;
}

bool Fixed::operator !=(Fixed const &compar) const
{
	if(this->fixe != compar.getRawBits())
		return true;
	return false;
}

Fixed  Fixed::operator +(Fixed const &op) const
{
	Fixed tmp(this->toFloat() + op.toFloat());
	
	return(tmp);
}

Fixed  Fixed::operator -(Fixed const &op) const
{
	Fixed tmp(this->toFloat() - op.toFloat());
	
	return(tmp);
}

Fixed  Fixed::operator *(Fixed const &op) const
{
	Fixed tmp(this->toFloat() * op.toFloat());
	
	return(tmp);
}

Fixed  Fixed::operator /(Fixed const &op) const
{
	Fixed tmp(this->toFloat() / op.toFloat());
	
	return(tmp);
}

Fixed	Fixed::operator ++(void)
{
	this->fixe += 1;
	return *this;
}

Fixed	Fixed::operator ++(int)
{
	Fixed tmp(*this);
	this->fixe += 1;
	return tmp;
}

Fixed	Fixed::operator --(void)
{
	this->fixe -= 1;
	return *this;
}

Fixed	Fixed::operator --(int)
{
	Fixed tmp(*this);
	this->fixe -= 1;
	return tmp;
}


Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a > b)
		return b;
	return a;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a > b)
		return b;
	return a;
}