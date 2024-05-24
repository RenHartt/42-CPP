/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:59:43 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/19 22:27:10 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
	else
		harl.complain(av[1]);
	return (0);
}
