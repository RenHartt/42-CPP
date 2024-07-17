/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:32:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 13:13:27 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &copy);
		~Intern(void);

		Intern &operator=(Intern const &copy);

		AForm *makeForm(const std::string &name, const std::string &target);
};

#endif
