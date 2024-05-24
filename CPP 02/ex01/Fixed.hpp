/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:23 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/21 15:50:30 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();
		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _rawBits;
		static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed);

#endif