/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:29:39 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/19 20:44:53 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	printError(std::string error)
{
	std::cout << "Error: " << error << std::endl;
	return (1);
}

int	openFile(std::string fileName, std::ifstream &oldFile, std::ofstream &newFile)
{
	oldFile.open(fileName.c_str(), std::ios::in);
	if (!oldFile.is_open())
		return (printError("could not open file"));
	newFile.open((fileName + ".replace").c_str(), std::ios::out);
	if (!newFile.is_open())
	{
		oldFile.close();
		return (printError("could not create file"));
	}
	return (0);
}

int	replace(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream		oldFile;
	std::ofstream		newFile;
	std::ostringstream	content;
	std::string			line;
	size_t				pos = 0;

	if (fileName.empty() || s1.empty() || s2.empty())
		return (printError("empty string"));
	if (openFile(fileName, oldFile, newFile))
		return (1);
	content << oldFile.rdbuf();
	line = content.str();
	while ((pos = line.find(s1, pos)) <= line.length())
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	newFile << line;
	oldFile.close();
	newFile.close();
	return (0);
}
