/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:59:41 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/19 22:28:28 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);

	private:
		void (Harl::*_func[4])(void);
		std::string _level[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif