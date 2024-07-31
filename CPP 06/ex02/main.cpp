/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:32:09 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/29 19:13:50 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main(void)
{
	Base* ptr = generate();
	Base& ref = *ptr;
	
	std::cout << "Ptr : ";
	identify(ptr);

	std::cout << "Ref : ";
	identify(ref);

	delete ptr;
}
