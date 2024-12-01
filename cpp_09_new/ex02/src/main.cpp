/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:31 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/01 17:40:59 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int ac, char **av)
{
	Merge	merge;
	clock_t	start;
	if (ac > 1)
	{
		try {
			merge.fill_array(av);
			std::vector<int> vec = merge.getVec();
			std::deque<int> deque = merge.getDeq();
			std::cout << "Before: ";
			for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
			start = clock();
			merge.mergeInsertionSortV();
			merge._timeVector = (double)((clock() - start) * 100000.0 / CLOCKS_PER_SEC);
			start = clock();
			merge.mergeInsertionSortD();
			merge._timeDeque = (double)((clock() - start) * 100000.0 / CLOCKS_PER_SEC);
			std::vector<int> new_vec = merge.getVec();
			std::cout << "After: ";
			for(std::vector<int>::iterator it = new_vec.begin(); it != new_vec.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
			std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << merge._timeVector << " us" << std::endl;
			std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << merge._timeDeque << " us" << std::endl;
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		return 0;
	}
	std::cout << "Invalid input, please enter ./PmergeMe \"list of positive integer\"" << std::endl;
	return 0;
}
