/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:01:44 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/27 15:30:16 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Floor.hpp"

int main(void)
{
	Floor *floor = new Floor();
	
	Character *test = new Character("fdgdf");
	test->equip(new Cure);

	Character test1 = *test;

	test1.use(0, *test);

	delete test;
	delete floor;

	return (0);
}
