/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:29:17 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/19 20:32:33 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (printError("wrong number of arguments"));
	replace(av[1], av[2], av[3]);
	return (0);
}
