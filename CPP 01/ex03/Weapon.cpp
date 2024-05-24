/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:23:42 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/21 12:40:09 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon(void) {}

void Weapon::setType(std::string type) {_type = type;}
std::string Weapon::getType(void) const {return (_type);}