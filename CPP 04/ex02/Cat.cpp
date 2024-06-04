/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:38:45 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:24:23 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): _brain(new Brain)
{
	this->type = "Cat";

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;

	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;

	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->_brain = new Brain();
	}

	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou !!" << std::endl;
}