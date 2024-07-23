/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:32:19 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/23 12:39:43 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GetType.hpp"
#include <climits>
#include <cstdlib>
#include <cstring>

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
	memset(&regex, 0, sizeof(regex));
	const char *pattern[4];
	pattern[Char] = "^(.)$";
	pattern[Int] = "^(-?[0-9]+)$";
	pattern[Float] = "^(-?[0-9]+.?[0-9]*f|\\+inff|nanf|-inff)$";
	pattern[Double] = "^(-?[0-9]+.?[0-9]*|\\+inf|nan|-inf)$";	

	if (isMatch(regex, pattern[Int], literal.c_str()) == true)
	{
        long value = strtol(literal.c_str(), NULL, 0);
        if (value < INT_MIN || value > INT_MAX)
			return (Double);
        return (Int);
	}
	else if (isMatch(regex, pattern[Float], literal.c_str()) == true)
		return (Float);
	else if (isMatch(regex, pattern[Double], literal.c_str()) == true)
		return (Double);
	else if (isMatch(regex, pattern[Char], literal.c_str()) == true)
		return (Char);
	else
		return (Unknown);
}
