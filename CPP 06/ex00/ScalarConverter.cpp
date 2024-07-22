/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:53:38 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/22 13:24:25 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "StringTo.hpp"
#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <regex.h>
#include <cstdlib>

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(__attribute__((unused))const ScalarConverter &copy) {}
ScalarConverter::~ScalarConverter(void) {}
ScalarConverter &ScalarConverter::operator=(__attribute__((unused))ScalarConverter const &copy) { return (*this); }

bool isMatch(regex_t regex, const char *pattern, const char *literal)
{
	regcomp(&regex, pattern, REG_EXTENDED);
	int error = regexec(&regex, literal, 0, NULL, 0);
	regfree(&regex);
	return (error ? false : true);
}

Type getType(const std::string &literal)
{
	regex_t regex;
	const char *pattern[4];
	pattern[Char] = "^('.')$";
	pattern[Int] = "^(-?[0-9]+)$";
	pattern[Float] = "^([0-9]+.?[0-9]*f|\\+inff|nanf|-inff)$";
	pattern[Double] = "^([0-9]+.?[0-9]*|\\+inf|nan|-inf)$";	

	memset(&regex, 0, sizeof(regex));

	if (isMatch(regex, pattern[Char], literal.c_str()) == true)
		return (Char);
	else if (isMatch(regex, pattern[Int], literal.c_str()) == true)
	{
		char *end;
        long value = strtol(literal.c_str(), &end, 10);
        if (value < INT_MIN || value > INT_MAX)
        {
			return (Double);
		}
        return (Int);
	}
	else if (isMatch(regex, pattern[Float], literal.c_str()) == true)
	{	
		return (Float);
	}
	else if (isMatch(regex, pattern[Double], literal.c_str()) == true)
	{
		return (Double);
	}
	else
	{
		return (Unknown);
	}
}

void printChar(const char result)
{
	std::cout << std::setw(8) << "char" << ": " << "'" << result << "'" << std::endl;
	
	std::cout << std::setw(8) << "int"<< ": " << static_cast<int>(result) << std::endl;
	
	std::cout << std::setw(8) << "float" << ": " << static_cast<float>(result) << ".0f" << std::endl;
	
	std::cout << std::setw(8) << "double" << ": " << static_cast<double>(result) << ".0" << std::endl;
}

void printInt(const int result)
{
	if (result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max())	
	{
		std::cout << std::setw(8) << "char" << ": impossible" << std::endl;
	}
	else if (result < 32 || result > 126)
	{
		std::cout << std::setw(8) << "char" << ": Non displayable" << std::endl;	
	}
	else	
	{
		std::cout << std::setw(8) << "char" << ": " << "'" << static_cast<char>(result) << "'" << std::endl;
	}

	std::cout << std::setw(8) << "int" << ": " << result << std::endl;

	std::cout << std::setw(8) << "float" << ": " << static_cast<float>(result) << ".0f" << std::endl;
	
	std::cout << std::setw(8) << "double" << ": " << static_cast<double>(result) << ".0" << std::endl;
}

void printFloat(const float result)
{

}

void ScalarConverter::convert(const std::string &literal)
{
	Type type = getType(literal);

	switch (type)
	{
	case Char :
		printChar(literal.at(1));
		break ;
	case Int :
		printInt(myStoi(literal));
		break ;
	case Float :
		std::cout << "It's a Float !" << std::endl;
		break ;
	case Double :
		std::cout << "It's a Double !" << std::endl;
		break ;
	default :
		std::cout << "Unknown !" << std::endl;
		break ;
	}
}
