/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:22:37 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 20:05:04 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2(clapTrap);
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2(scavTrap);

	clapTrap.attack("target");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);

	scavTrap.attack("target");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();

	return (0);
}
