/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:20:25 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 12:33:33 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade) 
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

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
	return ("Grade too High !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too Low !");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";

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
