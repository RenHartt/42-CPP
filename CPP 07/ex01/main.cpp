/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:03:01 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/30 15:53:43 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstring>
#include <iostream>

void incr(int &i)
{
	i++;
}

void incr2(char &i)
{
	i++;
}

int main(void)
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
	::iter(tab, 10, incr);
	for (int i = 0; i < 10; i++)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;

	std::string str = "Hello world";
	std::cout << str << std::endl;
	::iter(&str[0], str.length(), incr2);
	std::cout << str << std::endl;
	
	char str2[12] = "Hello world";
	std::cout << str2 << std::endl;
	::iter(&str2[0], strlen(str2), incr2);
	std::cout << str2 << std::endl;
}
