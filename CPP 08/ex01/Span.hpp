/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:17:01 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/09 14:50:46 by bgoron           ###   ########.fr       */
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
		
		template <typename Iterator>
		void			addNumber(Iterator begin, Iterator end);
		void			addNumber(int number);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

	private:
		std::list<int>	_array;
		unsigned int	_size;
		unsigned int	_index;
};

# include "Span.tpp"

#endif
