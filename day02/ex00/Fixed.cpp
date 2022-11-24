/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:27:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/15 13:12:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

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

Fixed::Fixed(int const nb)
{
	std::cout << "parametre constructor called" << std::endl;
	this->fixe = nb;
}

Fixed::Fixed(Fixed const &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixe = nb.getRawBits();
	return ;
}



int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixe;
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixe = raw;
	return ;
}

Fixed & Fixed::operator=(Fixed &addition)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixe = addition.getRawBits();
	return *this;
}