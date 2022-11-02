/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/31 17:58:46 by waelhamd         ###   ########.fr       */
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
	return ;
}

Fixed::Fixed(int const nb)
{
	this->fixe = (nb << this->fraction);
}

Fixed::Fixed(float const nb)
{
	this->fixe = (int)roundf(nb * (float)(1 << this->fraction));
}

float Fixed::toFloat( void ) const
{
	return((float)(this->fixe / (float)(1 << 8)));
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
	Fixed tmp;
	
	tmp.fixe = this->toFloat() + op.toFloat();
	return(tmp);
}

Fixed  Fixed::operator -(Fixed const &op) const
{
	Fixed tmp;
	
	tmp.fixe = this->toFloat() - op.toFloat();
	return(tmp);
}

Fixed  Fixed::operator *(Fixed const &op) const
{
	Fixed tmp;
	
	tmp.fixe = this->toFloat() * op.toFloat();
	return(tmp);
}
Fixed  Fixed::operator /(Fixed const &op) const
{
	Fixed tmp;
	
	tmp.fixe = this->toFloat() / op.toFloat();
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
