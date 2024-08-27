/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:50:04 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/27 10:42:29 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		PmergeMe(argv);
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}

	return (0);
}	
