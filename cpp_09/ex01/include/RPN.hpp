/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:14 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/02 09:38:03 by matle-br         ###   ########.fr       */
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
	RPN(RPN const & copy);
	RPN & operator=(RPN const & src);
	~RPN(void);

	void	fill_stack(char **av, std::stack<std::string> & stack);
	void	check_stack(std::stack<std::string> & stack);
	void	run_npm(std::stack<std::string> & stack);
	std::stack<std::string> & getStack();

private:

	int	_nbSign;
	int	_nbNumber;
	std::stack<std::string> _stack;

};

#endif
