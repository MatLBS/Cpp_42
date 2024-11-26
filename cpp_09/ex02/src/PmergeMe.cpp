/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 16:41:24 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

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

void	merge(std::vector<std::string> &leftArray, std::vector<std::string> &rightArray, std::vector<std::string> &vector)
{
	int	leftSize = vector.size() / 2;
	int	rightSize = vector.size() - leftSize;
	int	r = 0, l = 0, i = 0;

	while(l < leftSize && r < rightSize)
	{
		if (std::atoi(leftArray[l].c_str()) < std::atoi(rightArray[r].c_str())) {
			vector[i] = leftArray[l];
			i++;
			l++;
		}
		else {
			vector[i] = rightArray[r];
			r++;
			i++;
		}
	}
	while (l < leftSize)
	{
		vector[i] = leftArray[l];
		l++;
		i++;
	}
	while (r < rightSize)
	{
		vector[i] = rightArray[r];
		r++;
		i++;
	}
}

void	Merge::mergeSort(std::vector<std::string> &vector)
{
	int	length = vector.size();
	if (length <= 1)
		return ;
	int	middle = length / 2;
	std::vector<std::string>	leftArray;
	std::vector<std::string>	rightArray;
	for (int i = 0; i < length; i++)
	{
		if (i < middle)
			leftArray.push_back(vector[i]);
		else
			rightArray.push_back(vector[i]);
	}
	mergeSort(leftArray);
	mergeSort(rightArray);
	merge(leftArray, rightArray, vector);
}

void	merge(std::deque<std::string> &leftArray, std::deque<std::string> &rightArray, std::deque<std::string> &list)
{
	int	leftSize = list.size() / 2;
	int	rightSize = list.size() - leftSize;
	int	r = 0, l = 0, i = 0;

	while(l < leftSize && r < rightSize)
	{
		if (std::atoi(leftArray[l].c_str()) < std::atoi(rightArray[r].c_str())) {
			list[i] = leftArray[l];
			i++;
			l++;
		}
		else {
			list[i] = rightArray[r];
			r++;
			i++;
		}
	}
	while (l < leftSize)
	{
		list[i] = leftArray[l];
		l++;
		i++;
	}
	while (r < rightSize)
	{
		list[i] = rightArray[r];
		r++;
		i++;
	}
}

void	Merge::mergeSort(std::deque<std::string> &deque)
{
	int	length = deque.size();
	if (length <= 1)
		return ;
	int	middle = length / 2;
	std::deque<std::string>	leftArray;
	std::deque<std::string>	rightArray;
	for (int i = 0; i < length; i++)
	{
		if (i < middle)
			leftArray.push_back(deque[i]);
		else
			rightArray.push_back(deque[i]);
	}
	mergeSort(leftArray);
	mergeSort(rightArray);
	merge(leftArray, rightArray, deque);
}

