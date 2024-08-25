/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:22:49 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/23 13:13:46 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>

class BitcoinExchange
{
	public:
		BitcoinExchange(const char *inputFile);
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange(void);

		BitcoinExchange &operator=(const BitcoinExchange &assign);
		
		void									readCSV(void);
		void									printValues(void);
		bool									checkFormat(std::string line);
		bool									checkValue(float value);
		std::map<std::string, float>::iterator	findNearestDate(std::string date);

	private:
		std::ifstream					_CSVfile;
		std::ifstream					_inputFile;
		std::map<std::string, float>	_dataBase;
};


#endif
