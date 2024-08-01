/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:55:47 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/30 15:51:02 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template<typename T, typename F>
void iter(T *address, size_t length, F &function)
{
	while (length--)
	{
		function(*address++);
	}
}

#endif
