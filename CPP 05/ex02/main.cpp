/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 23:32:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/24 12:12:44 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>
#include <iostream>

void ShrubberyTooLowToSign(void)
{
	Bureaucrat yoda("Yoda", 146);
	std::cout << yoda;

	ShrubberyCreationForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void ShrubberyTooLowToExecute(void)
{
	Bureaucrat yoda("Yoda", 138);
	std::cout << yoda;

	ShrubberyCreationForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void RobotomyTooLowToSign(void)
{
	Bureaucrat yoda("Yoda", 73);
	std::cout << yoda;

	RobotomyRequestForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void RobotomyTooLowToExecute(void)
{
	Bureaucrat yoda("Yoda", 46);
	std::cout << yoda;

	RobotomyRequestForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void PresidentialTooLowToSign(void)
{
	Bureaucrat yoda("Yoda", 26);
	std::cout << yoda;

	PresidentialPardonForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void PresidentialTooLowToExecute(void)
{
	Bureaucrat yoda("Yoda", 6);
	std::cout << yoda;

	PresidentialPardonForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void ShrubberyNotSigned(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	ShrubberyCreationForm form("Form");
	std::cout << form;
	form.execute(yoda);
}

void RobotomyNotSigned(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	RobotomyRequestForm form("Form");
	std::cout << form;
	form.execute(yoda);
}

void PresidentialNotSigned(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	PresidentialPardonForm form("Form");
	std::cout << form;
	form.execute(yoda);
}

void GoodShrubbery(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	ShrubberyCreationForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void GoodRobotomy(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	RobotomyRequestForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

void GoodPresidential(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;

	PresidentialPardonForm form("Form");
	std::cout << form;
	form.beSigned(yoda);
	form.execute(yoda);
}

int main(void) 
{
	try { ShrubberyTooLowToSign(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
  
	try { ShrubberyTooLowToExecute(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { RobotomyTooLowToSign(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { RobotomyTooLowToExecute(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { PresidentialTooLowToSign(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { PresidentialTooLowToExecute(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { ShrubberyNotSigned(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { RobotomyNotSigned(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { PresidentialNotSigned(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { GoodShrubbery(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { GoodRobotomy(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	try { GoodPresidential(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
   
	return (0);
}
