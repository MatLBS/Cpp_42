/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/01 17:13:42 by matle-br         ###   ########.fr       */
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
	int		jacobsthal(int nb);

	void	mergeInsertionSortV(void);
	void	sortVectorPairs(void);
	void	moveMinimasToPendantV(std::vector<int> &pendant);
	void	moveMinimasToMainV(std::vector<int> &pendant);

	void	mergeInsertionSortD(void);
	void	sortDequePairs(void);
	void	moveMinimasToPendantD(std::deque<int> &pendant);
	void	moveMinimasToMainD(std::deque<int> &pendant);

	std::vector<int>	getVec(void);
	std::deque<int>		getDeq(void);

	double	_timeVector;
	double	_timeDeque;

private:

	std::vector<int>	_finalVector;
	std::deque<int>		_finalDeque;
	// std::vector<int>	_bigArray;
	// std::vector<int>	_littleArray;

};

#endif
