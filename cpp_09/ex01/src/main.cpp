/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:59:54 by matle-br          #+#    #+#             */
/*   Updated: 2024/12/02 09:38:38 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int ac, char **av)
{
	RPN rpn;

	if (ac != 2)
	{
		std::cout << "Invalid input, please enter ./RPN <ex: 8 9 * 9 - 9 - 9 - 4 - 1 + > " << std::endl;
		return 0;
	}
	try {
		rpn.fill_stack(av, rpn.getStack());
		rpn.check_stack(rpn.getStack());
		rpn.run_npm(rpn.getStack());
		while (!rpn.getStack().empty())
		{
			std::cout << rpn.getStack().top() << std::endl;;
			rpn.getStack().pop();
		}
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
