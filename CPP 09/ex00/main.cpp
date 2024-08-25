/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:22:33 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/23 15:01:01 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./btc [file of data]" << std::endl;
	}
	else
	{
		BitcoinExchange exchange(argv[1]);
		exchange.readCSV();
		exchange.printValues();
	}

	return (0);
}
