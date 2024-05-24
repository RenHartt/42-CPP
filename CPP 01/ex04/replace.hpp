/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:29:57 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/19 20:27:28 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <sstream>
# include <fstream>
# include <iostream>
# include <string>

int	replace(std::string fileName, std::string s1, std::string s2);
int	printError(std::string error);

#endif