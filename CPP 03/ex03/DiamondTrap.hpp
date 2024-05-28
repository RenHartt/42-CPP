/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:55:37 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/28 15:40:32 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const &copy);

		void whoAmI(void);
		using ScavTrap::attack;

	private:
		std::string _name;
		
		using FragTrap::_hitPoint;
		using ScavTrap::_energyPoint;
		using FragTrap::_attackDamage;
};

#endif