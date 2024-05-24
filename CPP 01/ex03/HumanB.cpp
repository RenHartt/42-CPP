/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 23:56:51 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/21 12:40:18 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}
HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &weapon) {_weapon = &weapon;}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with his bare hands" << std::endl;
}