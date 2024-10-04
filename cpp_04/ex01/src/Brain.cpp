/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:40:38 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 11:36:11 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain &	Brain::operator=(Brain const & src)
{
	std::cout << "Copy assignment Brain operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			setIdea(i, src.getIdea(i));
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
}

void	Brain::setIdeas(std::string str)
{
	for (int i = 0; i < this->_size; i++)
		this->_ideas[i] = str;
}

void	Brain::setIdea(int index, std::string str)
{
	if (index >= 0 && index < this->_size)
		this->_ideas[index] = str;
}

std::string	Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}
