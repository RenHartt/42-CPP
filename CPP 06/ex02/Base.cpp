/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:05:50 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/30 18:35:34 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

Base::~Base(void) {}

Base* generate(void)
{	
	std::srand(std::time(0));
	int random = std::rand() % 3;

	switch (random)
	{
		case 0 :
			return (new A);
		case 1 :
			return (new B);
		case 2 :
			return (new C);
		default :
			return (NULL);
	}
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
	}

	B* b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
	}

	C* c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e) {}
	
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e) {}
	
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e) {}
}
