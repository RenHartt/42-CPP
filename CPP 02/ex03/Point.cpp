/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:09:09 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/13 17:32:44 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void):
	_x(Fixed(0)),
	_y(Fixed(0))
{}

Point::Point(const float numberX, const float numberY):
	_x(Fixed(numberX)),
	_y(Fixed(numberY))
{}

Point::Point(const Point &copy):
	_x(copy._x),
	_y(copy._y)
{}

Point::~Point(void)
{}

Point &Point::operator=(const Point &copy)
{
	if (this != &copy)
	{
		(Fixed)_x = copy.getX();
		(Fixed)_y = copy.getY();
	}
	return (*this);
}

const Fixed Point::getX(void) const
{
	return (_x);
}

const Fixed Point::getY(void) const {
	return (_y);
}
