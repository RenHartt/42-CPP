/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:51:00 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/25 13:48:20 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>
#include <limits>
#include <vector>
#include <deque>

bool isPositiveInt(long number)
{
	return (number >= 0 && number <= std::numeric_limits<int>::max() ? true : false);
}

std::vector<std::size_t> generateJacobsthalSequence(std::size_t length)
{
	std::vector<std::size_t> jacobsthalSequence;
	jacobsthalSequence.push_back(0);
	jacobsthalSequence.push_back(1);

	for (std::size_t i = 2; i <= length; i++)
	{
		jacobsthalSequence.push_back(jacobsthalSequence[i - 1] + 2 * jacobsthalSequence[i - 2]);
	}

	return (jacobsthalSequence);
}

void PmergeMe(char **argv)
{
	std::vector<int> vector;
	std::deque<int> deque;

	if (fillContainer(argv + 1, vector, deque) == false)
	{
		std::cout << "Error" << std::endl;
		return ;
	}

	std::cout << std::setw(6) << "Before" << " : ";
	printContainer(vector);

	std::vector<int> sortedVector = FordJohnsonAlgorythm(vector);
	std::deque<int> sortedDeque = FordJohnsonAlgorythm(deque);

	std::cout << std::setw(6) << "After" << " : ";
	printContainer(sortedVector);
}
