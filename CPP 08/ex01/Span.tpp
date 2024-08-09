/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:47:58 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/09 15:15:01 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <stdexcept>
#include <iostream>

template <typename Iterator>
void Span::addNumber(Iterator begin, Iterator end)
{
	if (_index == _size)
	{
		throw std::out_of_range("Array is full.");
	}
	std::size_t distance = std::distance(begin, end);
	if (_index + distance > _size)
	{
		throw std::out_of_range("Array size is too small.");
	}
	_array.insert(_array.end(), begin, end);
	_index += distance;
}
