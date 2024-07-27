/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:13:06 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/26 12:25:18 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &copy);

		std::string getName(void) const;
		int getGrade(void) const;

		void promotion(void);
		void demotion(void);
		void signForm(Form &form);

		class GradeTooHighException;
		class GradeTooLowException;

	private:
		const std::string	_name;
		int					_grade;
};

class Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		const char	*what(void) const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		const char	*what(void) const throw();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
