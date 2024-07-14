/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:17:31 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/14 17:16:28 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm(void):
	_isSigned(false),
	_name("AForm"),	
	_signGrade(150),
	_execGrade(150)
{	
	std::cout << "AForm default constructor called." << std::endl;
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade):
	_isSigned(false),
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	std::cout << "AForm parameters constructor called." << std::endl;
}

AForm::AForm(const AForm &copy):
	_isSigned(copy._isSigned),
	_name(copy._name),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade)
{
	std::cout << "AForm copy constructor called." << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return *this;
}

std::string AForm::getName(void) const { return (_name); }		
int AForm::getSignGrade(void) const { return (_signGrade); }
int AForm::getExecGrade(void) const { return (_execGrade); }
bool AForm::getIsSigned(void) const { return (_isSigned); }

void	AForm::beSigned(const Bureaucrat &copy)
{
	if (getSignGrade() < copy.getGrade())
	{
		std::cout << copy.getName() << " couldn't sign " << this->_name << " because of grade too low." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << copy.getName() << " sign " << this->_name << "." << std::endl;
	this->_isSigned = true;
}

void AForm::execute(const Bureaucrat &copy) const
{
	if (copy.getGrade() > _execGrade)
	{
        throw Bureaucrat::GradeTooLowException();
	}
	if (!_isSigned)
	{
		throw Bureaucrat::FormNotSigned();
	}
}

const char *AForm::openFileFailed::what(void) const throw()
{
	return ("Grade too High.");
}
