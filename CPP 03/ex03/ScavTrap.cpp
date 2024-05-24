/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:30:59 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 20:10:37 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	_name = "ScavTrap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	*this = copy;

	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std:: cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}