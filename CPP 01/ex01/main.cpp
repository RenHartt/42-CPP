/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:00:46 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/20 17:49:31 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 1;
	Zombie *horde = zombieHorde(N, "Zombie");
	if (horde)
	{
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}
