/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:17:01 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/04 19:56:36 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &copy);
		~Span(void);

		Span &operator=(const Span &copy);
		
		void addNumber(int number);
		int shortestSpan(void);
		int longestSpan(void);

	private:
		int *_tab;
};

#endif
