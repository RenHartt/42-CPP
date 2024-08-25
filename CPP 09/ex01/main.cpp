/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:33:08 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/24 19:14:02 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN(argv[1]);
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}

	return (0);
}
