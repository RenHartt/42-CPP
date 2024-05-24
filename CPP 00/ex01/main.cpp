/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:52:36 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/17 20:50:45 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while(1)
	{
		command = phonebook.get_cin("Please enter a command : ");
		if (command == "")
			break ;
		if (command == "ADD")
		{
			if (phonebook.add())
				break ;
		}
		else if (command == "SEARCH")
		{
			if (phonebook.search())
				break ;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
}
