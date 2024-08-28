/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:50:04 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/28 13:40:43 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		PmergeMe(argv + 1);
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}

	return (0);
}	
