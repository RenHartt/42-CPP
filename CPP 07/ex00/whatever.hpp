/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:37:44 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/05 14:22:21 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <utility>

template<typename T>
void swap(T &a, T &b)
{
	std::swap(a, b);
}

template<typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif
