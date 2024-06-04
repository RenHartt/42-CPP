/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:38:57 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 16:49:38 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): _brain(new Brain)
{
	this->type = "Dog";

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): _brain(new Brain)
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
		this->_brain->operator=(*copy._brain);
	}

	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf !!" << std::endl;
}