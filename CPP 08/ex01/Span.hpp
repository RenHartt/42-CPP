/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:17:01 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/08 18:19:30 by baptistegoron    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		~Span(void);

		Span &operator=(const Span &copy);
		
		void			addNumber(int number);
		void			addNumber(std::list<int> number);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		void printLists() const;

	private:
		std::list<int>	_array;
		unsigned int	_size;
		unsigned int	_index;
};

#endif
