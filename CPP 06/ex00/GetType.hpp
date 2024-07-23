/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetType.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:31:54 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/22 13:37:13 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETTYPE_HPP
# define GETTYPE_HPP

# include <regex.h>
# include <string>

enum Type
{
	Char,
	Int,
	Float,
	Double,
	Unknown
};

bool isMatch(regex_t regex, const char *pattern, const char *literal);
Type getType(const std::string &literal);

#endif
