/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:38:57 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:24:35 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): _brain(new Brain)
{
	this->type = "Dog";

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;

	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;

	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		this->_brain = new Brain();
	}

	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf !!" << std::endl;
}