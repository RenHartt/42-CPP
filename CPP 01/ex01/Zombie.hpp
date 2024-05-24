/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:01:18 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/17 23:36:01 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif