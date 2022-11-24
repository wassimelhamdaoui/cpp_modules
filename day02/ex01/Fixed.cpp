/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/15 12:11:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"


/*
*un constrateur prenant un entier et qui convertit celuici en virgule fixe

*un costracteur prenant un flottant qui convertit ce celuici en virguil fixe

un fonction member qui convertit la valeur en virgul fixe en nomber a virgul flottant

un fonction qui convertit la valeur en virgule fixe en nomber entier

*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->fixe = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "destracteur is called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	if(this != &nb)
		this->fixe = nb.fixe;
	return ;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixe = (nb << this->fraction);
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixe = addition.getRawBits();
	return *this;
}

std::ostream & operator << (std::ostream &output, Fixed const &f)
{
	output << f.toFloat();
	return(output);
}