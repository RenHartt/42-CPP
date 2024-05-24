/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:57:43 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/17 19:40:52 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::get_nick_name(void) { return (_nickName); }
std::string	Contact::get_first_name(void) { return (_firstName); }
std::string	Contact::get_last_name(void) { return (_lastName); }
std::string	Contact::get_phone_number(void) { return (_phoneNumber); }
std::string	Contact::get_darkest_secret(void) { return (_darkestSecret); }

std::string	Contact::get_cin(std::string prompt)
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

int	Contact::set_contact(void)
{
	if ((_firstName = get_cin("Please enter the first name : ")).empty())
		return (1);
	if ((_lastName = get_cin("Please enter the last name : ")).empty())
		return (1);
	if ((_nickName = get_cin("Please enter the nick name : ")).empty())
		return (1);
	if ((_phoneNumber = get_cin("Please enter the phone number : ")).empty())
		return (1);
	if ((_darkestSecret = get_cin("Please enter the darkest secret : ")).empty())
		return (1);
	return (0);
}

void	Contact::display_restricted_contact(void)
{
	std::string firstName = get_first_name();
	std::string lastName = get_last_name();
	std::string nickName = get_nick_name();
	firstName = (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName);
	lastName = (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName);
	nickName = (nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName);
	std::cout << std::setw(10) << firstName << "|";
	std::cout << std::setw(10) << lastName << "|";
	std::cout << std::setw(10) << nickName << "|" << std::endl;
}

void	Contact::display_full_contact(void)
{
	std::cout << "First name: " << get_first_name() << std::endl;
	std::cout << "Last name: " << get_last_name() << std::endl;
	std::cout << "Nickname: " << get_nick_name() << std::endl;
	std::cout << "Phone number: " << get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << get_darkest_secret() << std::endl;
}
