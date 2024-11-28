/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:14 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/25 15:32:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

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
# include <stack>

class RPN {

public:

	RPN(void);
	~RPN(void);

	static void	fill_stack(char **av, std::stack<std::string> & stack);
	static void	check_stack(std::stack<std::string> & stack);
	static void	run_npm(std::stack<std::string> & stack);

private:

	static int	_nbSign;
	static int	_nbNumber;

};

#endif
