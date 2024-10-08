/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:37:11 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/12 16:17:42 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "ClapTrap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;

	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;

	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std:: cout << "ClapTrap destructor called" << std::endl;
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
	if (amount > _hitPoint)
		amount = _hitPoint;
	if (!_hitPoint)
	{
		std::cout << "ClapTrap " << _name;
		std::cout << " is already dead!" << std::endl;

		return ;
	}
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

