/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:26 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/23 16:16:00 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	Point a(-4, 4);
	Point b(4, 4);
	Point c(4, -4);
	Point point(-0.01, -0.1);

	std::cout << std::endl << "Point a(0, 0);" << std::endl;
	std::cout << "Point b(0, 4);" << std::endl;
	std::cout << "Point c(4, 0);" << std::endl;
	std::cout << "Point point(2, 2);" << std::endl << std::endl;

	if (bsp(a, b, c, point))
		std::cout << std::endl << GREEN "Point is in the triangle" RESET<< std::endl << std::endl;
	else
		std::cout << std::endl << RED "Point is not in the triangle" RESET<< std::endl << std::endl;

	return (0);
}