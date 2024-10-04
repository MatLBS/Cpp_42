/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:17:05 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/24 11:35:53 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"
#include "../include/contact.hpp"

bool	str_isnum(std::string str)
{
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}


int	main(void)
{
	PhoneBook repertoire;

	while (1)
	{
		std::string command;
		std::cout << "Write a command : ";
		if (!(std::cin >> command))
		{
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			Contact contact;
			contact.fill_info();
			repertoire.add_contact(contact);
		}
		else if (command == "SEARCH")
		{
			repertoire.print_contact();
			std::cout << "Write an index : ";
			std::cin >> repertoire.index;
			if (str_isnum(repertoire.index))
				repertoire.find_index();
			else
				std::cout << "Please type only numbers" << std::endl;
		}
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Please type ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
