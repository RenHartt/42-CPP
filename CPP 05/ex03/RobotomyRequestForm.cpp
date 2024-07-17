/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:21:19 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 13:11:41 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	AForm("RobotomyRequestForm", 25, 5),
	_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) { *this = copy; }

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}

	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const { return (this->_target); }

#include <sys/wait.h>
void RobotomyRequestForm::execute(const Bureaucrat &copy) const
{	
	AForm::execute(copy);

	std::cout << "\a" << std::flush;

	std::srand(std::time(0));
	int headOrTail = std::rand() % 2;

	if (headOrTail)
	{
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	}
	else 
	{
		std::cout << "Robotomy failed." << std::endl;
	}
}
