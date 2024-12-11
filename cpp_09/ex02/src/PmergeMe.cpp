/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/02 10:14:08 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

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

int	Merge::jacobsthal(int nb)
{
	if (nb == 0 || nb == -1)
		return 1;
	return (jacobsthal(nb - 1) + 2 * jacobsthal(nb - 2));
}

void	Merge::sortVectorPairs(void)
{
	for (int i = 0; i < (int)_finalVector.size() - 1; i++)
	{
		if (_finalVector[i] > _finalVector[i + 1] && i % 2 == 0)
			std::swap(_finalVector[i], _finalVector[i + 1]);
	}
}

void	Merge::moveMinimasToPendantV(std::vector<int> &pendant)
{
	for (std::vector<int>::iterator it = _finalVector.begin(); it != _finalVector.end(); it++)
	{
		if((it) - 1 == _finalVector.end())
			break ;
		pendant.push_back(*it);
		it = _finalVector.erase(it);
	}
}

void	Merge::moveMinimasToMainV(std::vector<int> &pendant)
{
	int	nb = 0, other_nb = 1, pendant_size = pendant.size();
	while (pendant_size > 0)
	{
		int	jacob = jacobsthal(nb) > (int)pendant.size() ? pendant.size() : jacobsthal(nb);
		int	low = 0, middle = 0, high = high = _finalVector.size() - 1, target = pendant[jacob - other_nb];
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
		pendant_size--;
		if (jacobsthal(nb) == 1 || other_nb == (jacobsthal(nb) - jacobsthal(nb - 1)))
		{
			nb++;
			other_nb = 1;
		}
		else
			other_nb++;
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

	moveMinimasToMainV(pendant);
	return ;
}

void	Merge::sortDequePairs(void)
{
	for (int i = 0; i < (int)_finalDeque.size() - 1; i++)
	{
		if (_finalDeque[i] > _finalDeque[i + 1] && i % 2 == 0)
			std::swap(_finalDeque[i], _finalDeque[i + 1]);
	}
}

void	Merge::moveMinimasToPendantD(std::deque<int> &pendant)
{
	for (std::deque<int>::iterator it = _finalDeque.begin(); it != _finalDeque.end();)
	{
		if((it) - 1 == _finalDeque.end())
			break ;
		pendant.push_back(*it);
		it = _finalDeque.erase(it);
	}
}

void	Merge::moveMinimasToMainD(std::deque<int> &pendant)
{
	int	nb = 0, other_nb = 1, pendant_size = pendant.size();
		while (pendant_size > 0)
	{
		int	jacob = jacobsthal(nb) > (int)pendant.size() ? pendant.size() : jacobsthal(nb);
		int	low = 0, middle = 0, high = high = _finalDeque.size() - 1, target = pendant[jacob - other_nb];
		while (low <= high)
		{
			middle = low + (high - low) / 2;
			int	value = _finalDeque[middle];
			if (value < target)
				low = middle + 1;
			else if (value > target)
				high = middle - 1;
		}
		_finalDeque.insert(_finalDeque.begin() + low, target);
		pendant_size--;
		if (jacobsthal(nb) == 1 || other_nb == (jacobsthal(nb) - jacobsthal(nb - 1)))
		{
			nb++;
			other_nb = 1;
		}
		else
			other_nb++;
	}
}

void	Merge::mergeInsertionSortD(void)
{
	sortDequePairs();
	if (_finalDeque.size() <= 2)
		return ;
	std::deque<int>	pendant;

	moveMinimasToPendantD(pendant);

	mergeInsertionSortD();

	moveMinimasToMainD(pendant);
	return ;
}

std::vector<int>	Merge::getVec(void)
{
	return this->_finalVector;
}

std::deque<int>	Merge::getDeq(void)
{
	return this->_finalDeque;
}
