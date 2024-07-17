/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:17:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 17:03:59 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void):
	_isSigned(false),
	_name("Form"),	
	_signGrade(150),
	_execGrade(150) {}

Form::Form(const std::string name, const int signGrade, const int execGrade):
	_isSigned(false),
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade)
	{
		if (_signGrade > 150 || _execGrade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (_signGrade < 1 || _execGrade < 1)
			throw Bureaucrat::GradeTooHighException();
	}

Form::Form(const Form &copy):
	_isSigned(copy._isSigned),
	_name(copy._name),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade) {}

Form::~Form(void) {}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return *this;
}

bool Form::getIsSigned(void) const { return(_isSigned); }
std::string Form::getName(void) const { return(_name); }
int Form::getSignGrade(void) const { return (_signGrade); }
int Form::getExecGrade(void) const { return (_execGrade); }

void	Form::beSigned(const Bureaucrat &copy)
{
	if (getSignGrade() < copy.getGrade())
	{
		std::cout << copy.getName() << " couldn't sign " << this->_name << " because of grade too low." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << copy.getName() << " sign " << this->_name << "." << std::endl;
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Name : " << form.getName() << std::endl;
	out << "Is signed : " << (form.getIsSigned() ? "true" : "false") << std::endl;
	out << "Grade to sign : " << form.getSignGrade() << std::endl;
	out << "Grade to execute : " << form.getExecGrade() << std::endl;

	return (out);
}

