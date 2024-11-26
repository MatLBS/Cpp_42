/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:59:54 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 11:12:28 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int ac, char **av)
{
	RPN rpn;
	std::stack<std::string> stack;

	if (ac != 2)
	{
		std::cout << "Invalid input, please enter ./RPN <ex: 8 9 * 9 - 9 - 9 - 4 - 1 + > " << std::endl;
		return 0;
	}
	try {
		RPN::fill_stack(av, stack);
		RPN::check_stack(stack);
		RPN::run_npm(stack);
		while (!stack.empty())
		{
			std::cout << stack.top() << std::endl;;
			stack.pop();
		}
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
