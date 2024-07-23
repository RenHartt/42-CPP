/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringTo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:51:00 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/23 12:38:03 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>

int strtoi(const std::string &string)
{
	int result;
	std::stringstream stream(string);

	stream >> result;
	return (result);
}
