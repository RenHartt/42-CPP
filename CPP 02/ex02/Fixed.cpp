/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:21 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 16:17:42 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
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

bool Fixed::operator>(const Fixed &copy) const { return (_rawBits > copy.getRawBits()); }
bool Fixed::operator<(const Fixed &copy) const { return (_rawBits < copy.getRawBits()); }
bool Fixed::operator>=(const Fixed &copy) const { return (_rawBits >= copy.getRawBits()); }
bool Fixed::operator<=(const Fixed &copy) const { return (_rawBits <= copy.getRawBits()); }
bool Fixed::operator==(const Fixed &copy) const { return (_rawBits == copy.getRawBits()); }
bool Fixed::operator!=(const Fixed &copy) const { return (_rawBits != copy.getRawBits()); }
Fixed Fixed::operator+(const Fixed &copy) const { return (Fixed(this->toFloat() + copy.toFloat())); }
Fixed Fixed::operator-(const Fixed &copy) const { return (Fixed(this->toFloat() - copy.toFloat())); }
Fixed Fixed::operator*(const Fixed &copy) const { return (Fixed(this->toFloat() * copy.toFloat())); }
Fixed Fixed::operator/(const Fixed &copy) const { return (Fixed(this->toFloat() + copy.toFloat())); }

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
		_rawBits = copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	_rawBits--;
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	_rawBits++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_rawBits--;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_rawBits++;
	return (tmp);
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw) {_rawBits = raw;}

float Fixed::toFloat(void) const { return ((float)_rawBits / (1 << _fractionalBits)); }
int Fixed::toInt(void) const { return (_rawBits >> _fractionalBits); }
Fixed &Fixed::min(Fixed &nb1, Fixed &nb2) { return (nb1 < nb2 ? nb1 : nb2); }
const Fixed &Fixed::min(const Fixed &nb1,const  Fixed &nb2) { return (nb1 < nb2 ? nb1 : nb2); }
Fixed &Fixed::max(Fixed &nb1, Fixed &nb2) { return (nb1 > nb2 ? nb1 : nb2); }
const Fixed &Fixed::max(const Fixed &nb1, const  Fixed &nb2) { return (nb1 > nb2 ? nb1 : nb2); }
