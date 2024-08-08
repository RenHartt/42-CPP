/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:42:47 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/08 20:05:50 by baptistegoron    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <list>
#include <iostream>
#include <stdexcept>

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

void Span::addNumber(std::list<int> numbers)
{
	if (_index >= _size)
	{
        throw std::out_of_range("Array is full.");
    }
	if (_index + numbers.size() >= _size)
	{
        throw std::out_of_range("Array has not enough place.");
    }
	for (std::list<int>::const_iterator i = numbers.begin(); i != numbers.end(); i++)
	{
        addNumber(*i);
    }
}

unsigned int Span::shortestSpan(void) const
{
	if (_index < 2)
		throw std::length_error("Not enough numbers to have a span.");
	unsigned int shortestSpan = UINT_MAX;
	std::list<int> sortedList = _array;
	sortedList.sort();
	
	for (std::list<int>::const_iterator current = _array.begin(), next = _array.begin()++; next != _array.end(); current++, next++)
	{
		if (static_cast<unsigned int>(*next - *current) < shortestSpan)
			shortestSpan = *next - *current;
	}

	return (shortestSpan);
}

unsigned int Span::longestSpan(void) const
{
	if (_index < 2)
		throw std::length_error("Not enough numbers to have a span.");
	int minElement = *std::min_element(_array.begin(), _array.end());
	int maxElement = *std::max_element(_array.begin(), _array.end());

    return maxElement - minElement;
}

void Span::printLists() const 
{
	for (std::list<int>::const_iterator it = _array.begin(); it != _array.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
