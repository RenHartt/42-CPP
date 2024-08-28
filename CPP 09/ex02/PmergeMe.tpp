/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:23:16 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/28 13:39:46 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

template <typename ContainerA, typename ContainerB>
bool fillContainer(char **argv, ContainerA &containerA, ContainerB &containerB)
{
	while (*argv)
	{
		char *endptr;
		std::size_t number(strtol(*argv, &endptr, 0));

		if (isPositiveInt(number) == true && *endptr == '\0')
		{
			containerA.push_back(static_cast<int>(number));
			containerB.push_back(static_cast<int>(number));
		}
		else
		{
			return (false);
		}

		argv++;
	}

	return (true);
}

template <typename Container>
void printContainer(Container &container)
{
    typename Container::iterator it = container.begin();
    
    if (it != container.end())
	{
        std::cout << *it;
        it++;
    }
    for (; it != container.end(); it++)
	{
        std::cout << " " << *it;
    }
    std::cout << std::endl;
}

template <typename Container>
Container mergePair(Container &left, Container &right)
{
    Container merged;

    std::size_t i = 0, j = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            merged.push_back(left[i]);
            i++;
        }
        else
        {
            merged.push_back(right[j]);
            j++;
        }
    }

    while (i < left.size())
    {
        merged.push_back(left[i]);
        i++;
    }
    while (j < right.size())
    {
        merged.push_back(right[j]);
        j++;
    }

    return (merged);
}

template <typename Container>
Container FordJohnsonAlgorythm(Container &container)
{
	std::size_t size = container.size();

	if (size == 1)
	{
		return (container);
	}

	std::size_t k = 0;
    while (jacobsthalNumber(k) < size)
    {
        k++;
    }
	std::size_t jacobsthal = jacobsthalNumber(--k);
	
	Container left(container.begin(), container.begin() + jacobsthal);
	Container right(container.begin() + jacobsthal, container.end());

	left = FordJohnsonAlgorythm(left);
	right = FordJohnsonAlgorythm(right);

	return (mergePair(left, right));
}
