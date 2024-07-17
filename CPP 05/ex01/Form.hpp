/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:17:37 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 16:51:50 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const std::string name, const int signGrade, const int execGrade);
		Form(const Form &copy);
		~Form(void);

		Form &operator=(const Form &copy);
		
		bool getIsSigned(void) const;
		std::string getName(void) const;
		int getExecGrade(void) const;
		int getSignGrade(void) const;
		void beSigned(const Bureaucrat &copy);

	private:
		bool				_isSigned;
		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
