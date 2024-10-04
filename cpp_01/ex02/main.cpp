/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:16:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 09:44:31 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address str = " << &str << std::endl;
	std::cout << "address stringPTR = " << stringPTR << std::endl;
	std::cout << "address stringREF = " << &stringREF << std::endl;

	std::cout << "__________________________________" << std::endl << std::endl;

	std::cout << "value str = " << str << std::endl;
	std::cout << "value stringPTR = " << *stringPTR << std::endl;
	std::cout << "value stringREF = " << stringREF << std::endl;
}
