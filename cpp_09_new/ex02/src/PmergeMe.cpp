/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/28 15:53:50 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

std::vector<std::string> Merge::_finalVector;
std::deque<std::string> Merge::_finalDeque;
std::vector<std::string> Merge::_bigArray;

Merge::Merge(void){}

Merge::~Merge(void){}

long	Merge::get_time(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL) == -1)
	{
		printf("Error with gettimeofday");
		return (-1);
	}
	return (time.tv_sec * 1000000L + time.tv_usec);
}

std::vector<std::string>	Merge::mergeInsertionSort(std::vector<std::string> &vector)
{
	if (vector.size() <= 1)
		return vector;
	std::vector<std::string>	bigArray;
	for (int i = 0; i < (int)vector.size() - 1; i++)
	{
		if (vector[i] < vector[i + 1] && i % 2 == 0)
			std::swap(vector[i], vector[i + 1]);
		if (i % 2 == 0)
		{
			bigArray.push_back(vector[i]);
			// std::vector<std::string>::iterator it = std::find(vector.begin(), vector.end(), vector[i]);
			// vector.erase(it);
		}
	}
	mergeInsertionSort(bigArray);
	return bigArray;
}

void	Merge::addSmallest(std::vector<std::string> &vector)
{
	std::vector<std::string>::iterator smallest = std::min_element(Merge::_finalVector.begin(), Merge::_finalVector.end());
	std::cout << "smallest = " << *smallest << std::endl;
	std::vector<std::string>::iterator it = std::find(vector.begin(), vector.end(), *smallest);
	int index = std::distance(vector.begin(), it);
	_finalVector.push_back(vector[index + 1]);
	// vector.erase(it + 1);
}

void	Merge::binarySearch(std::vector<std::string> &vector)
{
	
}
