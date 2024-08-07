/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:49:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/24 12:48:12 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void goodFormBeSigned(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 100, 50);
	std::cout << form;
	form.beSigned(yoda);
	std::cout << form;
}

void goodFormSignForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 100, 50);
	std::cout << form;
	yoda.signForm(form);
	std::cout << form;
}

void signGradeTooLowForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 151, 50);
	std::cout << form;
	form.beSigned(yoda);
	std::cout << form;
}

void signGradeTooHighForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 0, 50);
	std::cout << form;
	form.beSigned(yoda);
	std::cout << form;
}

void executionGradeTooLowForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 100, 151);
	std::cout << form;
	form.beSigned(yoda);
	std::cout << form;
}

void executionGradeTooHighForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Form form("Form", 100, 0);
	std::cout << form;
	form.beSigned(yoda);
	std::cout << form;
}

int main(void)
{
	try { goodFormBeSigned(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { goodFormSignForm(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { signGradeTooLowForm(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { signGradeTooHighForm(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { executionGradeTooLowForm(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { executionGradeTooHighForm(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

}
