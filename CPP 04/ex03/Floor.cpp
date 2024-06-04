/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:44:26 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:27:09 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor(void)
{
	for (int i = 0; i < 1000; i++)
		this->_floor[i] = NULL;

	std::cout << "Floor default constructor called" << std::endl;
}

Floor::Floor(const Floor &copy)
{
	*this = copy;

	std::cout << "Floor copy constructor called" << std::endl;
}

Floor::~Floor(void)
{
	for (int i = 0; i < 1000; i++)
	{
		if (this->_floor[i])
			delete this->_floor[i];
	}

	std::cout << "Floor destructor called" << std::endl;
}

Floor &Floor::operator=(const Floor &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 1000; i++)
			this->_floor[i] = copy._floor[i];
	}

	return (*this);
}

void Floor::setFloor(AMateria *materia)
{
	for (int i = 0; i < 1000; i++)
	{
		if (!this->_floor[i])
		{
			this->_floor[i] = materia;
			break;
		}
	}
}

AMateria *Floor::getFloor(int idx) const { return (this->_floor[idx]); }