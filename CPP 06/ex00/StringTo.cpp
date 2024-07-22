/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringTo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:51:00 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/21 21:25:38 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>

int myStoi(const std::string &string)
{
	int result;
	std::stringstream stream(string);

	stream >> result;
	return (result);
}

float myStof(const std::string &string)
{
	float result;
	std::stringstream stream(string);

	stream >> result;
	return (result);
}

double myStod(const std::string &string)
{
	double result;
	std::stringstream stream(string);

	stream >> result;
	return (result);
}

