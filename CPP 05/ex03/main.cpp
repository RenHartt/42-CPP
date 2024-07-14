/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 23:32:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/14 19:15:26 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>
#include <iostream>

int main(void) 
{
	try
	{
		Bureaucrat yoda("Yoda", 1);
		std::cout << yoda;
		
		ShrubberyCreationForm form("Form");
		form.beSigned(yoda);
		form.execute(yoda);
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat obiWan("Obi-Wan", 1);
		std::cout << obiWan;

		RobotomyRequestForm form("Form");
		form.beSigned(obiWan);
		form.execute(obiWan);
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat anakin("Anakin", 100);
		std::cout << anakin;
		
		PresidentialPardonForm form("Form");
		form.beSigned(anakin);
		form.execute(anakin);
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat ahsoka("Ahsoka", 150);
		std::cout << ahsoka;

		PresidentialPardonForm form("Form");
		form.beSigned(ahsoka);
		form.execute(ahsoka);
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}
    return (0);
}
