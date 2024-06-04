/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:01:44 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 17:10:41 by bgoron           ###   ########.fr       */
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
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	floor->setFloor(me->getMateria(0));
	me->unequip(0);
	me->use(0, *bob);
	floor->setFloor(me->getMateria(1));
	me->unequip(1);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete floor;

	return (0);
}