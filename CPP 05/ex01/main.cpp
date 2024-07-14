/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:49:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/10 17:09:34 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat yoda("Yoda", 1);
		std::cout << yoda;
		Form form("Form", 10, 10);
		form.beSigned(yoda);
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

	std::cout << std::endl;

	try
	{
		Bureaucrat obiWan("Obi-wan", 50);	
		std::cout << obiWan;
		Form form("Form", 10, 10);
		form.beSigned(obiWan);
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat anakin("Anakin", 100);
		std::cout << anakin;
		Form form("Form", 10, 10);
		form.beSigned(anakin);
	}
	catch (std::exception & e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}
