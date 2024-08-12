/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:42:47 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/12 15:58:43 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <list>
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int N) :
	_size(N),
	_index(0)
{}

Span::Span(const Span &copy) :
	_size(copy._size),
	_index(copy._index)
{
	_array = copy._array;
}

Span::~Span(void)
{}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_array = copy._array;
		_size = copy._size;
		_index = copy._index;
	}

	return (*this);
}

void Span::addNumber(int number)
{
	if (_index >= _size)
	{
        throw std::out_of_range("Array is full.");
    }
    _array.push_back(number);
	_index++;
}

unsigned int Span::shortestSpan(void) const
{
	if (_index < 2)
	{
		throw std::length_error("Not enough numbers to have a span.");
	}

	unsigned int shortestSpan = UINT_MAX;
	std::list<int> sortedList = _array;
	
	sortedList.sort();
	
	for (std::list<int>::const_iterator current = sortedList.begin(), next = ++sortedList.begin(); next != sortedList.end(); current++, next++)
	{
		if (static_cast<unsigned int>(*next - *current) < shortestSpan)
			shortestSpan = *next - *current;
	}

	return (shortestSpan);
}

unsigned int Span::longestSpan(void) const
{
	if (_index < 2)
	{
		throw std::length_error("Not enough numbers to have a span.");
	}

	int minElement = *std::min_element(_array.begin(), _array.end());
	int maxElement = *std::max_element(_array.begin(), _array.end());

    return (maxElement - minElement);
}
