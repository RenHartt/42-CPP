/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:49:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 16:43:32 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void tooHighGradeConstructor(void)
{
	Bureaucrat yoda("Yoda", 151);
	std::cout << yoda;
}

void tooLowGradeConstructor(void)
{
	Bureaucrat yoda("Yoda", 0);
	std::cout << yoda;
}

void tooHighPromotion(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	yoda.promotion();
	std::cout << yoda;
}

void tooLowDemotion(void)
{
	Bureaucrat yoda("Yoda", 150);
	std::cout << yoda;
	yoda.demotion();
	std::cout << yoda;
}

void goodPromotion(void)
{
	Bureaucrat yoda("Yoda", 150);
	std::cout << yoda;
	yoda.promotion();
	std::cout << yoda;
}

void goodDemotion(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	yoda.demotion();
	std::cout << yoda;
}


int main(void)
{
	try { tooHighGradeConstructor(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { tooLowGradeConstructor(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { tooHighPromotion(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;
	
	try { tooLowDemotion(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { goodPromotion(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { goodDemotion(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

}
