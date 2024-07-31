/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:04:57 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/27 17:00:11 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}
Serializer::Serializer(const Serializer &copy){(void)copy;}
Serializer::~Serializer(void) {}

Serializer &Serializer::operator=(const Serializer &copy)
{
	(void)copy;
	return (*this); 
}

uintptr_t Serializer::serialize(Data* ptr) 
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
