/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 07:51:00 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/28 13:44:45 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>
#include <iomanip>
#include <ios>
#include <limits>
#include <vector>
#include <deque>
#include <ctime>

bool isPositiveInt(long number)
{
	return (number >= 1 && number <= std::numeric_limits<int>::max() ? true : false);
}

std::size_t jacobsthalNumber(std::size_t index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}

	std::size_t prev2 = 0, prev1 = 1, result = 0;

	for (std::size_t i = 2; i <= index; i++)
    {
        result = prev1 + 2 * prev2;
        prev2 = prev1;
        prev1 = result;
    }
    
	return (result);
}

void PmergeMe(char **argv)
{
	std::vector<int> vector;
	std::deque<int> deque;
	clock_t startVector, endVector, startDeque, endDeque;
	double elabseTimeVector, elabseTimeDeque;

	if (fillContainer(argv, vector, deque) == false)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	
	std::cout << std::setw(6) << "Before" << " : ";
	printContainer(vector);
	
	startVector = clock();
	std::vector<int> sortedVector = FordJohnsonAlgorythm(vector);
	endVector = clock();
	elabseTimeVector = double(endVector - startVector) / (CLOCKS_PER_SEC / 1000000);

	startDeque = clock();
	std::deque<int> sortedDeque = FordJohnsonAlgorythm(deque);
	endDeque = clock();
	elabseTimeDeque = double(endDeque - startDeque) / (CLOCKS_PER_SEC / 1000000);

	std::cout << std::setw(6) << "After" << " : ";
	printContainer(sortedVector);

	std::cout << "Time to process a range of " << vector.size() << std::left << std::setw(26) << " elements with std::vector" << " : " << elabseTimeVector << " μs" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << std::left << std::setw(26) << " elements with std::deque" << " : " << elabseTimeDeque << " μs" << std::endl;
}
