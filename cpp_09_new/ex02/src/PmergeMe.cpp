/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/29 16:27:28 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

std::vector<std::string> _finalVector;
std::deque<std::string> _finalDeque;
std::vector<std::string> _bigArray;

Merge::Merge(void){}

Merge::~Merge(void){}

void	Merge::fill_array(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		if (!std::isdigit(av[i][0]))
			throw(std::invalid_argument("Error: bad input => " + std::string(av[i])));
		if (std::atol(av[i]) < 0 || std::atol(av[i]) > 2147483647)
			throw(std::invalid_argument("Error: bad input => " + std::string(av[i])));
		this->_finalDeque.push_back(std::atoi(av[i]));
		this->_finalVector.push_back(std::atoi(av[i]));
	}
}

void	Merge::sortVectorPairs(void)
{
	for (int i = 0; i < (int)_finalVector.size() - 1; i++)
	{
		std::cout << "i = " << _finalVector[i] << std::endl;
		std::cout << "i + 1 = " << _finalVector[i + 1] << std::endl;
		if (_finalVector[i] > _finalVector[i + 1] && i % 2 == 0)
		{
			std::cout << "bonjour" << std::endl;
			std::swap(_finalVector[i], _finalVector[i + 1]);
		}
	}
}

void	Merge::moveMinimasToPendantV(std::vector<int> &pendant)
{
	for (std::vector<int>::iterator it = _finalVector.begin(); it != _finalVector.end(); it++)
	{
		pendant.push_back(*it);
		it = _finalVector.erase(it);
	}
}

void	Merge::moveMinimasToMainV(std::vector<int> &pendant)
{
	for (std::vector<int>::iterator it = pendant.begin(); it != pendant.end();)
	{
		int	low = 0, middle = 0, high = high = _finalVector.size() - 1, target = *it;
		while (low <= high)
		{
			middle = low + (high - low) / 2;
			int	value = _finalVector[middle];
			if (value < target)
				low = middle + 1;
			else if (value > target)
				high = middle - 1;
		}
		_finalVector.insert(_finalVector.begin() + low, target);
		it = pendant.erase(it);
	}
}

void	Merge::mergeInsertionSortV(void)
{
	sortVectorPairs();
	if (_finalVector.size() <= 2)
		return ;

	std::vector<int>	pendant;

	moveMinimasToPendantV(pendant);

	mergeInsertionSortV();

	std::cout << "FinalVector: ";
	for(std::vector<int>::iterator it = _finalVector.begin(); it != _finalVector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Pendant: ";
	for(std::vector<int>::iterator it = pendant.begin(); it != pendant.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	moveMinimasToMainV(pendant);
	std::cout << "FinalVector: ";
	for(std::vector<int>::iterator it = _finalVector.begin(); it != _finalVector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	return ;
}

// void	Merge::binarySearch(int target)
// {
// 	int	low = 0;
// 	int	high = Merge::_finalVector.size() - 1;

// 	while (low <= high)
// 	{
// 		int	middle = low +(high - low) / 2;
// 		int	value = std::atoi(Merge::_finalVector[middle].c_str());
// 		std::cout << "middle = " << value << std::endl;
// 		if (value < target)
// 			low = middle + 1;
// 		else if (value > target)
// 			high = middle - 1;
// 		else
// 			return ;
// 	}
// }

std::vector<int>	Merge::getVec(void)
{
	return this->_finalVector;
}

std::deque<int>	Merge::getDeq(void)
{
	return this->_finalDeque;
}
