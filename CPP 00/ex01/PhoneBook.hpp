/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:26:56 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/17 19:37:56 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		_size;
		Contact	_book[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		int			search(void);
		int			add(void);
		std::string	get_cin(std::string prompt);
};


#endif
