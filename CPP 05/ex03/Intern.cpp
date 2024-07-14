/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:32:34 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/14 19:09:20 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;	

	std::cout << "Intern copy constructor called." << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern &Intern::operator=(__attribute__((unused))const Intern &copy)
{
	return (*this);
}

AForm* Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string functionTab[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
    AForm* form = NULL;
    
    for (int i = 0; i < 3; ++i)
	{
        if (functionTab[i] == name)
		{
            switch (i)
			{
                case 0:
                    form = new ShrubberyCreationForm(target);
                    break;
                case 1:
                    form = new RobotomyRequestForm(target);
                    break;
                case 2:
                    form = new PresidentialPardonForm(target);
                    break;
            }
            std::cout << "Intern creates " << functionTab[i] << std::endl;
            return (form);
        }
    }
    std::cerr << "Unknown form type: " << name << std::endl;
    return (NULL);
}
