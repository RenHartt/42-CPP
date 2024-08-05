/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:32:28 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/04 18:03:07 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

std::list<int> initList(int sizeList)
{
	std::list<int> list;
	for (int i = 0; i < sizeList; i++)
	{
		list.push_back(i);
	}

	return (list);
}

int main (void)
{
	std::list<int> list = initList(20);
	try
	{
		std::cout << *easyfind(list, 3) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		std::cout << *easyfind(list, 450) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}
}
