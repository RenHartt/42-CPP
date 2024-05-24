/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:21 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 16:16:38 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int number): _rawBits(number << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number): _rawBits(roundf(number * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {std::cout << "Destructor called" << std::endl;}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw) {_rawBits = raw;}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
		_rawBits = copy.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

float Fixed::toFloat(void) const { return ((float)_rawBits / (1 << _fractionalBits)); }
int Fixed::toInt(void) const { return (_rawBits >> _fractionalBits); }
