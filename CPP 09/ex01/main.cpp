/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:33:08 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/28 13:42:07 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		argv++;
		std::string expression;
		while (*argv)
		{
			expression += *argv;
			argv++;
		}
		RPN(expression.c_str());
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}

	return (0);
}
