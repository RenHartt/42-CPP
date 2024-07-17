/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:15:28 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 13:11:12 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardonForm", 25, 5),
	_target("Target") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
	AForm("PresidentialPardonForm", 25, 5),
	_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) { *this = copy; }

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}

	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const { return (this->_target); }

void PresidentialPardonForm::execute(const Bureaucrat &copy) const
{
	AForm::execute(copy);

	std::cout << getTarget() << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}
