/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:23 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/21 19:09:30 by bgoron           ###   ########.fr       */
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
		bool operator>(const Fixed &copy) const;
		bool operator<(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;
		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;
		Fixed &operator--(void);
		Fixed operator--(int number);
		Fixed &operator++(void);
		Fixed operator++(int number);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &number1, Fixed &number2);
		static const Fixed &min(const Fixed &number1, const  Fixed &number2);
		static Fixed &max(Fixed &number1, Fixed &number2);
		static const Fixed &max(const Fixed &number1, const  Fixed &number2);

	private:
		int _rawBits;
		static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed);

#endif