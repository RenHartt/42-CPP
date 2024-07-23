/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:53:55 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/22 13:37:51 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter
{
	public:		
		static void convert(const std::string &literal);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter(void);

		ScalarConverter &operator=(ScalarConverter const &copy);
};

#endif
