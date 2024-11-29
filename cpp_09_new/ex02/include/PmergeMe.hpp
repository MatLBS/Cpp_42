/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/29 15:01:09 by matle-br         ###   ########.fr       */
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

	void	fill_array(char **av);

	void	mergeInsertionSortV(void);
	void	sortVectorPairs(void);
	void	moveMinimasToPendantV(std::vector<int> &pendant);
	void	moveMinimasToMainV(std::vector<int> &pendant);

	void	mergeInsertionSortD(void);


	void	addSmallest(std::vector<int> &vector);
	void	binarySearch(int target);
	std::vector<int>	getVec(void);
	std::deque<int>		getDeq(void);

	long	_timeVectorB;
	long	_timeDequeB;
	long	_timeVectorA;
	long	_timeDequeA;

private:

	std::vector<int>	_finalVector;
	std::deque<int>		_finalDeque;
	// std::vector<int>	_bigArray;
	// std::vector<int>	_littleArray;

};

#endif
