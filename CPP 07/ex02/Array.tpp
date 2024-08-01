/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:59:16 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/01 16:43:10 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

template <typename T>
Array<T>::Array(void) :
	_array(new T[0]),
	_size(0)
{}

template <typename T>
Array<T>::Array(std::size_t n) :
	_array(new T[n]),
	_size(n)
{}

template <typename T>
Array<T>::Array(const Array &copy)
{
	*this = copy;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		delete[] this->_array;
		this->_size = copy._size;
		this->_array = new T[copy._size];
		for (std::size_t i = 0; i < _size; i++)
		{
			_array[i] = copy._array[i];
		}
	}

	return (*this);
}

template <typename T>
T &Array<T>::operator[](std::size_t index)
{
	if (index >= _size)
		throw Array::outOfBoundsIndexException();

	return (_array[index]);
}

template <typename T>
const char *Array<T>::outOfBoundsIndexException::what(void) const throw()
{
	return ("Out of bound");
}
