/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:22:37 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 18:26:17 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("ClapTrap");
	ClapTrap claptrap2(claptrap);

	claptrap.attack("Claptrap2");
	claptrap2.takeDamage(5);
	claptrap2.beRepaired(5);

	claptrap2.attack("Claptrap");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);

	return (0);
}
