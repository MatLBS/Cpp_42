/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/02 10:05:19 by matle-br         ###   ########.fr       */
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

# define BLEU "\033[34m"
# define BLANC "\033[37m"
# define ROUGE "\033[31m"
# define VERT "\033[32m"
# define RESET "\033[0m"

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

};

#endif
