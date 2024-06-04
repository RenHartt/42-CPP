/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:51:54 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:24:13 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);

		Brain &operator=(const Brain &copy);

	private:
		std::string _ideas[100];
};

#endif