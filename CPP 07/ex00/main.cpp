/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:34:09 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/05 14:25:59 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout <<  "Before swap : " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	::swap( a, b );
	
	std::cout << "After swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}
