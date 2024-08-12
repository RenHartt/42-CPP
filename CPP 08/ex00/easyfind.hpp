/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:32:25 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/12 19:10:46 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template<typename T>
typename T::iterator easyfind(T list, int toFind)
{
	typename T::iterator result = std::find(list.begin(), list.end(), toFind);
	if (result == list.end())
	{
		throw std::runtime_error("Not found.");
	}

	return (result);
}

#endif
