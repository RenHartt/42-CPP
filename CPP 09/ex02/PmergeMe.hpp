/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:50:29 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/25 13:24:44 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>

bool isPositiveInt(long number);
std::vector<std::size_t> generateJacobsthalSequence(std::size_t length);
void PmergeMe(char **argv);

# include "PmergeMe.tpp"

#endif
