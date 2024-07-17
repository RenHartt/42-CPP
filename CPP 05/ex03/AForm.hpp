/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:17:37 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 18:49:23 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm(void);
		AForm(const std::string name, const int signGrade, const int execGrade);
		AForm(const AForm &copy);
		virtual ~AForm(void);

		AForm &operator=(const AForm &copy);
		std::string getName(void) const;		
		int getExecGrade(void) const;
		int getSignGrade(void) const;
		bool getIsSigned(void) const;

		void beSigned(const Bureaucrat &copy);
		virtual void execute(const Bureaucrat &copy) const = 0;
		
		class openFileFailed : public std::exception
		{
			public:
				const char *what() const throw();
		};
	private:
		bool				_isSigned;
		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
