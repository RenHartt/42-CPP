/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:09:21 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 20:15:42 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	_name = "FragTrap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;

	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	*this = copy;

	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std:: cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoint = copy._hitPoint;
		this->_energyPoint = copy._energyPoint;
		this->_attackDamage = copy._attackDamage;
	}

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name;
	std::cout <<" is asking for a high five" << std::endl;
}