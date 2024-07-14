/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:17:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/10 17:10:05 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void):
	_isSigned(false),
	_name("Form"),	
	_signGrade(150),
	_execGrade(150)
{	
	std::cout << "Form default constructor called." << std::endl;
}

Form::Form(const std::string name, const int signGrade, const int execGrade):
	_isSigned(false),
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	std::cout << "Form parameters constructor called." << std::endl;
}

Form::Form(const Form &copy):
	_isSigned(copy._isSigned),
	_name(copy._name),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade)
{
	std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called." << std::endl;
}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return *this;
}

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
