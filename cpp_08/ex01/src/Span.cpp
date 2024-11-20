/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:42:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/19 10:37:58 by matle-br         ###   ########.fr       */
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

void	Span::fill(int nb, int nb2)
{
	int	index = nb2 - nb;
	if (index > this->_size)
		throw TooManyNumbers();
	std::vector<int>tmp;
	for (int i = 0; i <= index; i++)
	{
		tmp.push_back(nb);
		nb++;
	}
	this->_tab.insert(this->_tab.end(), tmp.begin(), tmp.end());
}

int	Span::shortestSpan(void)
{
	// for(std::vector<int>::iterator it = this->_tab.begin(); it != this->_tab.end(); it++)
	// 	std::cout << *it << std::endl;
	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughNumbers();
	int	minDiff = this->_tab[0];
	std::sort(this->_tab.begin(), this->_tab.begin() + this->_tab.size());
	for (unsigned long i = 0; i < this->_tab.size() - 1; i++)
	{
		if (std::abs(this->_tab[i + 1] - this->_tab[i]) < minDiff)
				minDiff = std::abs(this->_tab[i] - this->_tab[i + 1]);
	}
	return minDiff;
}

int	Span::longestSpan(void)
{
	if (this->_tab.size() == 0 || this->_tab.size() == 1)
		throw NotEnoughNumbers();
	std::vector<int>::iterator smallest = std::min_element(this->_tab.begin(), this->_tab.end());
	std::vector<int>::iterator biggest = std::max_element(this->_tab.begin(), this->_tab.end());
	return *biggest - *smallest;
}

