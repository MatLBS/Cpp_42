/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/28 15:53:22 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include <string>
# include <cstdlib>
# include <sstream>
# include <time.h>
# include <algorithm>
# include <ctime>
# include <locale>
# include <vector>
# include <deque>
#include <sys/time.h>

class Merge {

public:

	Merge();
	~Merge();

	template <typename T>
	static void	fill_array(char **av, T & array)
	{
		for (int i = 1; av[i]; i++)
			array.push_back(std::string(av[i]));
	}

	template <typename T>
	static void	check_array(T & array)
	{
		for(typename T::iterator it = array.begin(); it != array.end(); it++)
		{
			const char *str = it->c_str();
			if (!std::isdigit(str[0]))
				throw(std::invalid_argument("Error: bad input => " + *it));
			if (std::atol(str) < 0 || std::atol(str) > 2147483647)
				throw(std::invalid_argument("Error: bad input => " + *it));
		}
	}

	static std::vector<std::string>	mergeInsertionSort(std::vector<std::string> &vector);
	static void	mergeInsertionSort(std::deque<std::string> &deque);
	static void	addSmallest(std::vector<std::string> &vector);
	static void	binarySearch(std::vector<std::string> &vector);
	static long	get_time(void);

	long	_timeVectorB;
	long	_timeDequeB;
	long	_timeVectorA;
	long	_timeDequeA;

	static std::vector<std::string>	_finalVector;
	static std::deque<std::string>	_finalDeque;
	static std::vector<std::string>	_bigArray;
private:

};

#endif
