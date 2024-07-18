/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:22:03 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/18 11:22:16 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	AForm("ShrubberyCreationForm", 25, 5),
	_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) { *this = copy; }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}

	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const { return (this->_target); }

void ShrubberyCreationForm::execute(const Bureaucrat &copy) const
{
	AForm::execute(copy);

	std::string treeFileName = getTarget() + "_shruberry";
	std::fstream treeFile;

	treeFile.open(treeFileName.c_str(), std::ios::out);
	if (treeFile.is_open())
	{
		treeFile << "                leaf.leaf.leaf." << std::endl;
		treeFile << "        leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "     leaf.leaf.leaf.trunk.leaf.leaf.leaf." << std::endl;
		treeFile << "       leaf.leaf.trunk.trunk.leaf.leaf." << std::endl;
		treeFile << "	            trunk.trunk." << std::endl;
		treeFile << "		           trunk.     leaf.leaf.leaf." << std::endl;
		treeFile << "		           trunk.    trunk.trunk.leaf." << std::endl;
		treeFile << "		            trunk.trunk.   leaf.leaf." << std::endl;
		treeFile << "		             trunk.          leaf." << std::endl;
		treeFile << "		             trunk." << std::endl;
		treeFile << "		            trunk." << std::endl;
		treeFile << "		            trunk." << std::endl;
		treeFile << "		           trunk." << std::endl;
		treeFile << "		          trunk." << std::endl;
		treeFile << "	           root.root." << std::endl;
		treeFile << "	        root.root.root.root." << std::endl;
		treeFile << "	      root.  root.  root.root." << std::endl;
		treeFile << "      root.    root.      root.root." << std::endl;
		treeFile << "   root.    root.      root.     root.root." << std::endl;
		treeFile << "                               root.    root." << std::endl;
	}
	else
	{
		throw AForm::openFileFailed();
	}
}
