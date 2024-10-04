/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:01:09 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:54:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("WARNING");
	std::cout << "________________________________" << std::endl << std::endl;
	harl.complain("DEBUG");
	std::cout << "________________________________" << std::endl << std::endl;
	harl.complain("INFO");
	std::cout << "________________________________" << std::endl << std::endl;
	harl.complain("ERROR");
	harl.complain("");
	return (0);
}
