/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:15:56 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/12 19:20:30 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>

void basicTest(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void addRangeTest(void)
{
	try
	{
		std::vector<int> vector;
		for (int i = 0; i < 1000; i++)
		{
			vector.push_back(i);
		}

		Span sp = Span(1000);
		
		sp.addNumber(vector.begin(), vector.end());
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

void tooSmallList(void)
{
	try
	{
		std::vector<int> vector;
		
		vector.push_back(1);

		Span sp = Span(1);
		
		sp.addNumber(vector.begin(), vector.end());
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

void fullList(void)
{
	try
	{
		std::vector<int> vector;
		for (int i = 0; i < 10; i++)	
		{
			vector.push_back(i);
		}

		Span sp = Span(10);
		
		sp.addNumber(vector.begin(), vector.end());
		sp.addNumber(42);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

void notEnoughPlaceLeft(void)
{
	try
	{
		std::vector<int> vector;
		for (int i = 0; i < 10; i++)	
		{
			vector.push_back(i);
		}

		Span sp = Span(10);

		sp.addNumber(42);
		sp.addNumber(vector.begin(), vector.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "Basic test :" << std::endl;
	basicTest();
	
	std::cout << "Add range test :" << std::endl;
	addRangeTest();

	std::cout << "Too small list test :" << std::endl;
	tooSmallList();

	std::cout << "Full list test :" << std::endl;
	fullList();

	std::cout << "Not enought place test :" << std::endl;
	notEnoughPlaceLeft();

	return 0;
}
