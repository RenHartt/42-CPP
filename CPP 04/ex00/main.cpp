/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:12:24 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/31 15:49:30 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* k = new WrongCat();
	
	std::cout << std::endl;
	std::cout << std::setw(8) << i->getType() << " : ";
	i->makeSound();
	std::cout << std::setw(8) << j->getType() << " : ";
	j->makeSound();
	std::cout << std::setw(8) << k->getType() << " : ";
	k->makeSound();
	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	delete k;
	delete j;
	delete i;
	delete meta;

	return (0);
}
