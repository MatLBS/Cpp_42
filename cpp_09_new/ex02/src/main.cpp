/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:31 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/28 15:52:51 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int ac, char **av)
{
	Merge	merge;
	std::vector<std::string> vec;
	std::deque<std::string> deque;
	if (ac > 1)
	{
		Merge::fill_array(av, vec);
		Merge::fill_array(av, deque);
		try {
			Merge::check_array(vec);
			Merge::check_array(deque);
			std::cout << "Before: ";
			for(std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
			// merge._timeVectorB = Merge::get_time();
			Merge::_finalVector = Merge::mergeInsertionSort(vec);
			Merge::addSmallest(vec);
			Merge::binarySearch(vec);
			std::cout << "finalVector = ";
			for(std::vector<std::string>::iterator it = Merge::_finalVector.begin(); it != Merge::_finalVector.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
			// merge._timeVectorA = Merge::get_time();
			// merge._timeDequeB = Merge::get_time();
			// Merge::mergeSort(deque);
			// merge._timeDequeA = Merge::get_time();
			std::cout << "After: ";
			for(std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
			// std::cout << "FinalVector: ";
			// for(std::vector<std::string>::iterator it = Merge::_finalVector.begin(); it != Merge::_finalVector.end(); it++)
			// 	std::cout << *it << " ";
			// std::cout << std::endl;
			// std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << (merge._timeVectorA - merge._timeVectorB) << " us" << std::endl;
			// std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << (merge._timeDequeA - merge._timeDequeB) << " us" << std::endl;
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		return 0;
	}
	std::cout << "Invalid input, please enter ./PmergeMe \"list of positive integer\"" << std::endl;
	return 0;
}
