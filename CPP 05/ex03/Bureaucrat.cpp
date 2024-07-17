/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:20:25 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 19:00:58 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void):
	_name("Bureaucrat"),
	_grade(150) {} 

Bureaucrat::Bureaucrat(std::string const name, int grade):
	_name(name),
	_grade(grade) 
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) { *this = copy; }

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		(std::string)this->_name = copy._name;
		this->_grade = copy._grade;
	}

	return (*this);
}

std::string Bureaucrat::getName(void) const { return (_name); }
int Bureaucrat::getGrade(void) const { return (_grade); }

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too High.");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too Low.");
}

const char *Bureaucrat::FormNotSigned::what(void) const throw()
{
	return ("Form not signed.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;

	return (out);
}

void Bureaucrat::promotion(void)
{
	if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::demotion(void)
{
	if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::executeForm(const AForm &form)
{
	if(!form.getIsSigned())
	{
		std::cout << form.getName() << " cannot be executed because it is not signed." << std::endl;
		throw Bureaucrat::FormNotSigned();
	}
	else if (form.getExecGrade() < this->_grade)
	{
		std::cout << getName() << " cannot execute " << form.getName() << " because his grade is too low." <<std::endl;
		throw Bureaucrat::GradeTooLowException();
	}

	form.execute(*this);
	std::cout << getName() << " executed " << form.getName()  << std::endl;
}
