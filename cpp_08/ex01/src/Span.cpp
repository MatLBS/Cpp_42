/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:42:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/18 13:15:10 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(void){}

Span::Span(Span const & copy)
{
	*this = copy;
}

Span &	Span::operator=(Span const & src)
{
	(void)src;
	return *this;
}

Span::~Span(void){}

Span::Span(unsigned int N): _size(N), _len(0)
{}

void	Span::addNumber(int nb)
{
	if (this->_len >= this->_size)
		throw TooManyNumbers();
	this->_tab.push_back(nb);
	this->_len++;
}

void	Span::fill(int nb)
{
	// this->_tab = this->_size;
	std::cout << "bonjour" << std::endl;
	std::cout << this->_size << std::endl;
	// std::cout << this->_tab.begin() << std::endl;
	std::fill(this->_tab.begin(), this->_tab.begin() + 5, nb);
	std::cout << this->_tab.size() << std::endl;
}

int	Span::shortestSpan(void)
{
	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughNumbers();
	int	minDiff = this->_tab[0];
	for (unsigned long i = 0; i < this->_tab.size(); i++)
	{
		for (unsigned long j = i + 1; j < this->_tab.size(); j++)
		{
			if (std::abs(this->_tab[i] - this->_tab[j]) < minDiff)
				minDiff = std::abs(this->_tab[i] - this->_tab[j]);
		}
	}
	return minDiff;
}

int	Span::longestSpan(void)
{
	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughNumbers();
	int	maxDiff = this->_tab[0];
	for (unsigned long i = 0; i < this->_tab.size(); i++)
	{
		for (unsigned long j = i + 1; j < this->_tab.size(); j++)
		{
			if (std::abs(this->_tab[i] - this->_tab[j]) > maxDiff)
				maxDiff = std::abs(this->_tab[i] - this->_tab[j]);
		}
	}
	return maxDiff;
}

