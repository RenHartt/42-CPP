/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:56:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/31 16:23:27 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <exception>

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(std::size_t n);
		Array<T>(const Array &copy);
		~Array<T>(void);

		Array	&operator=(const Array &copy);
		T		&operator[](std::size_t index);

		class outOfBoundsIndexException;

	private:
		T			*_array;
		std::size_t	_size;
};

template<typename T>
class Array<T>::outOfBoundsIndexException : public std::exception
{
	public:
		const char *what() const throw();
};

# include "Array.tpp"

#endif
