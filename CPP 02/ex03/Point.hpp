/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:09:11 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/13 17:35:22 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float numberX, const float numberY);
		Point(const Point &copy);
		Point &operator=(const Point &copy);
		~Point();
		const Fixed getX(void) const;
		const Fixed getY(void) const;

	private:
		 const Fixed _x;
		 const Fixed _y;
	
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
