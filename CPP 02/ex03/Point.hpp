/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:09:11 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 16:21:33 by bgoron           ###   ########.fr       */
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
		Fixed const _x;
		Fixed const _y;
	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
