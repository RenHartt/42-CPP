/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:39:12 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:22:14 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";

	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;

	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}

	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou Miaou !!" << std::endl;
}