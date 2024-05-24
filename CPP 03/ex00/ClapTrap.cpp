/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:11 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 18:40:36 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "ClapTrap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;

	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std:: cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
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

void ClapTrap::attack(const std::string &target)
{
	if (!_energyPoint)
	{
		std::cout << "ClapTrap " << _name;
		std::cout << " have no energy point!" << std::endl;

		return ;
	}
	_energyPoint--;

	std::cout << "ClapTrap " << _name << " attack " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;

	std::cout << "ClapTrap " << _name << " take ";
	std::cout << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
	{
		std::cout << "ClapTrap " << _name;
		std::cout << " have no energy point!" << std::endl;

		return ;
	}
	_energyPoint--;
	_hitPoint += amount;

	std::cout << "ClapTrap " << _name << " be repaired ";
	std::cout << amount << " points of damage!" << std::endl;
}
