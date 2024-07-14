/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:49:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/14 15:37:56 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

#define MASTER 0

int main(void)
{
	try
	{
		Bureaucrat bob("Bob", 150);
		std::cout << bob;
		bob.promotion();
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

	std::cout << std::endl;

	try
	{
		Bureaucrat danny("Danny", 1);
		danny.promotion();
		std::cout << danny;
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat anakin("Anakin", 150);
		std::cout << anakin;
		anakin.demotion();
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}
