/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:07:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/07 10:05:24 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serialize.hpp"

Serialize::Serialize(void)
{}

Serialize::Serialize(Serialize const & copy)
{
	*this = copy;
}

Serialize &	Serialize::operator=(Serialize const & src)
{
	(void)src;
	return (*this);
}

Serialize::~Serialize(void)
{}

uintptr_t	Serialize::serialize(Data* ptr)
{
	uintptr_t ptrData = reinterpret_cast<uintptr_t>(ptr);
	return ptrData;

}

Data *	Serialize::deserialize(uintptr_t raw)
{
	Data	*nb =reinterpret_cast<Data *>(raw);
	return nb;
}
