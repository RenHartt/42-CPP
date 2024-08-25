/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:23:16 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/25 14:51:58 by bgoron           ###   ########.fr       */
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
		std::size_t number(strtol(*argv, NULL, 0));

		if (isPositiveInt(number) == true)
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
Container mergePair(Container &left, Container &right, std::vector<std::size_t> jacobsthalSequence)
{
	Container merged;

	std::size_t i = 0, j = 0, pos = 0;

	while (i < left.size() && j < right.size())
	{
		pos = std::min(jacobsthalSequence[merged.size() + 1], merged.size());

		if (left[i] < right[j])
		{
			merged.insert(merged.begin() + pos, left[i]);
			i++;
		}
		else
		{
			merged.insert(merged.begin() + pos, right[j]);
			j++;
		}
	}

	while (i < left.size())
	{
		pos = std::min(jacobsthalSequence[merged.size() + 1], merged.size());
        merged.insert(merged.begin() + pos, left[i]);
        i++;
    }
    while (j < right.size())
	{
		pos = std::min(jacobsthalSequence[merged.size() + 1], merged.size());
        merged.insert(merged.begin() + pos, right[j]);
        j++;
    }
	printContainer(merged);
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

	std::vector<std::size_t> jacobsthalSequence = generateJacobsthalSequence(size);
	std::size_t middle = size / 2;

	Container left(container.begin(), container.begin() + middle);
	Container right(container.begin() + middle, container.end());

	left = FordJohnsonAlgorythm(left);
	right = FordJohnsonAlgorythm(right);

	return (mergePair(left, right, jacobsthalSequence));
}
