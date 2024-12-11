/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:31 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/02 10:07:39 by matle-br         ###   ########.fr       */
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
			std::cout << BLANC << "Before: " << RESET;
			for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
				std::cout << BLEU << *it << " " << RESET;
			std::cout << std::endl;
			start = clock();
			merge.mergeInsertionSortV();
			merge._timeVector = (double)((clock() - start) * 100000.0 / CLOCKS_PER_SEC);
			start = clock();
			merge.mergeInsertionSortD();
			merge._timeDeque = (double)((clock() - start) * 100000.0 / CLOCKS_PER_SEC);
			std::vector<int> new_vec = merge.getVec();
			std::cout << BLANC << "After: " << RESET;
			for(std::vector<int>::iterator it = new_vec.begin(); it != new_vec.end(); it++)
				std::cout << BLEU << *it << " " << RESET;
			std::cout << std::endl;
			std::cout << "Time to process a range of " << ROUGE << vec.size() << RESET << " elements with std::vector : " << VERT << merge._timeVector  << RESET << " us" << std::endl;
			std::cout << "Time to process a range of " << ROUGE << deque.size() << RESET << " elements with std::deque : " << VERT <<  merge._timeDeque << RESET << " us" << std::endl;
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		return 0;
	}
	std::cout << "Invalid input, please enter ./PmergeMe \"list of positive integer\"" << std::endl;
	return 0;
}
