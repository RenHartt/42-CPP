/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:37:01 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/21 12:42:02 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon) {}
HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _Weapon.getType() << std::endl;
}
