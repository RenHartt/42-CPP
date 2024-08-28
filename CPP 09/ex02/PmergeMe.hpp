/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:50:29 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/28 11:45:56 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstddef>

bool isPositiveInt(long number);
std::size_t jacobsthalNumber(std::size_t index);
void PmergeMe(char **argv);

# include "PmergeMe.tpp"

#endif
