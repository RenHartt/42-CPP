/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:53:38 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/27 14:47:20 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "StringToi.hpp"
#include "PrintType.hpp"
#include "GetType.hpp"
#include <cstdlib>
#include <cstring>
#include <iostream>

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(__attribute__((unused))const ScalarConverter &copy) {}
ScalarConverter::~ScalarConverter(void) {}
ScalarConverter &ScalarConverter::operator=(__attribute__((unused))ScalarConverter const &copy) { return (*this); }

void ScalarConverter::convert(const std::string &literal)
{
	Type type = getType(literal);
	switch (type)
	{
	case Char :
		printChar(literal.at(0));
		break ;
	case Int :
		printInt(strtoi(literal));
		break ;
	case Float :
		printFloat(strtof(literal.c_str(), NULL));
		break ;
	case Double :
		printDouble(strtod(literal.c_str(), NULL));
		break ;
	default :
		std::cout << "Unknown !" << std::endl;
		break ;
	}
}
