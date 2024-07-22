/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:54:50 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/21 19:41:02 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "argc != 2" << std::endl;
		std::cout << "Always two there are...no more...no less. A master and an apprentice." << std::endl;
		return (-1);
	}
	ScalarConverter::convert(argv[1]);

	return (0);
}
