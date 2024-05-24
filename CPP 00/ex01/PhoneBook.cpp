/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:26:43 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/17 20:41:25 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_size = 0;
}

PhoneBook::~PhoneBook(){}

std::string	PhoneBook::get_cin(std::string prompt)
{
	std::string cin;

	std::cout << prompt;
	while (getline(std::cin, cin))
	{
		if (cin == "")
			std::cout << prompt;
		else
			break;
	}
	return (cin);
}

int	PhoneBook::add(void)
{
	if (_book[_size].set_contact())
		return (1);
	_size = (_size + 1) % 8;
	return (0);
}

int	PhoneBook::search(void)
{
	int index;
	std::string input;

	if (_book[0].get_first_name() == "")
	{
		std::cout << "No contact in the phone book" << std::endl;
		return (1);
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
	for (int i = 0; i <= 7 && _book[i].get_first_name() != ""; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		_book[i].display_restricted_contact();
	}
	input = get_cin("Please enter the index of the contact you want to display : ");
	if (std::cin.eof())
		return (1);
	index = std::atoi(input.c_str());
	while (index < 1 || index > 8 || _book[index - 1].get_first_name() == "")
	{
		std::cout << "Invalid index" << std::endl;
		input = get_cin("Please enter the index of the contact you want to display : ");
		if (std::cin.eof())
			return (1);
		index = std::atoi(input.c_str());
	}
	_book[index - 1].display_full_contact();
	return (0);
}
