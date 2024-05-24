/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:54:14 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 16:20:38 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float triangleArea(Point const &a, Point const &b, Point const &c)
{
	return (fabs((a.getX() * (c.getY() - b.getY()) + b.getX() * (a.getY() - c.getY()) + c.getX() * (b.getY() - a.getY())).toFloat()) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (triangleArea(point, b, c) + triangleArea(a, point, c) + triangleArea(a, b, point) == triangleArea(a, b, c));
}
