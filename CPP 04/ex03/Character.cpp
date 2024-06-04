/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:01:35 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 13:50:15 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character &copy) : _name(copy._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._materia[i])
			_materia[i] = copy._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	std::cout << "Character name constructor called" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
	}

	return (*this);
}

std::string const &Character::getName(void) const { return (_name); }
AMateria *Character::getMateria(int idx) const { return (_materia[idx]); }

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _materia[idx])
	{
		_materia[idx]->use(target);
	}
}