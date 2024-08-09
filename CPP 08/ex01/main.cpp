/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:15:56 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/09 15:57:00 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
	try
	{
		std::vector<int> vector;
		for (int i = 0; i < INT_MAX; i++)
		{
			vector.push_back(i);
		}
		Span sp = Span(INT_MAX);
		
		sp.addNumber(vector.begin(), vector.end());
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}
