/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:15:56 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/08 19:30:42 by baptistegoron    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <iostream>

int main()
{
	try
	{
		Span sp = Span(2);

		sp.addNumber(50);
		
		sp.printLists();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	
	return 0;
}
