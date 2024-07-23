/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:27:41 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/23 14:15:01 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PrintType.hpp"
#include <climits>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <limits>

void printChar(const char result)
{
	std::cout << std::setw(6) << "char" << " : " << "'" << result << "'" << std::endl;
	std::cout << std::setw(6) << "int"<< " : " << static_cast<int>(result) << std::endl;
	std::cout << std::setw(6) << "float" << " : " << static_cast<float>(result) << ".0f" << std::endl;
	std::cout << std::setw(6) << "double" << " : " << static_cast<double>(result) << ".0" << std::endl;
}

void printInt(const int result)
{
	if (result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max())	
		std::cout << std::setw(6) << "char" << " : impossible" << std::endl;
	else if (result < 32 || result > 126)
		std::cout << std::setw(6) << "char" << " : Non displayable" << std::endl;	
	else	
		std::cout << std::setw(6) << "char" << " : " << "'" << static_cast<char>(result) << "'" << std::endl;
	std::cout << std::setw(6) << "int" << " : " << result << std::endl;
	if (result < 1000000 && result > -1000000)
	{
		std::cout << std::setw(6) << "float" << " : " << static_cast<float>(result) << ".0f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << static_cast<double>(result) << ".0" << std::endl;
	}
	else
	{
		std::cout << std::setw(6) << "float" << " : " << static_cast<float>(result) << "f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << static_cast<double>(result) << std::endl;
	}
}

void printFloat(const float result)
{
	if (result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max() || std::isnan(result))	
		std::cout << std::setw(6) << "char" << " : impossible" << std::endl;
	else if (result < 32 || result > 126)
		std::cout << std::setw(6) << "char" << " : Non displayable" << std::endl;	
	else	
		std::cout << std::setw(6) << "char" << " : " << "'" << static_cast<char>(result) << "'" << std::endl;
	if (result < static_cast<int>(INT_MIN) || result > static_cast<float>(INT_MAX) || std::isnan(result))
		std::cout << std::setw(6) << "int" << " : impossible" << std::endl;
	else
		std::cout << std::setw(6) << "int"<< " : " << static_cast<int>(result) << std::endl;
	if (result < 1000000 && result > -1000000)
	{
		std::cout << std::setw(6) << "float" << " : " << result << ".0f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << static_cast<double>(result) << ".0" << std::endl;
	}
	else
	{
		std::cout << std::setw(6) << "float" << " : " << result << "f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << static_cast<double>(result) << std::endl;
	}
}

void printDouble(const double result)
{
	if (result < std::numeric_limits<char>::min() || result > std::numeric_limits<char>::max() || std::isnan(result))	
		std::cout << std::setw(6) << "char" << " : impossible" << std::endl;
	else if (result < 32 || result > 126)
		std::cout << std::setw(6) << "char" << " : Non displayable" << std::endl;	
	else	
		std::cout << std::setw(6) << "char" << " : " << "'" << static_cast<char>(result) << "'" << std::endl;
	if (result < static_cast<int>(INT_MIN) || result > static_cast<float>(INT_MAX) || std::isnan(result))
		std::cout << std::setw(6) << "int" << " : impossible" << std::endl;
	else
		std::cout << std::setw(6) << "int"<< " : " << static_cast<int>(result) << std::endl;
	if (result < 1000000 && result > -1000000)
	{
		std::cout << std::setw(6) << "float" << " : " << static_cast<double>(result) << ".0f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << result << ".0" << std::endl;
	}
	else
	{
		std::cout << std::setw(6) << "float" << " : " << static_cast<double>(result) << "f" << std::endl;
		std::cout << std::setw(6) << "double" << " : " << result << std::endl;
	}
}
