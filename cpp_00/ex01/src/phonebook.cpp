/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:11:48 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/25 15:12:44 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

void	print_index(size_t i);
void	print_names(std::string name);

PhoneBook::PhoneBook(void) {
	// std::cout << "Constructor PhoneBook called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor PhoneBook called" << std::endl;
	return;
}

void	PhoneBook::add_contact(const Contact& contact)
{
	int	i;

	i = 0;
	if (nbContact >= 8)
	{
		while (i < 7)
		{
			this->contact_list[i] = this->contact_list[i + 1];
			i++;
		}
		contact_list[7] = contact;
	}
	else
	{
		this->contact_list[nbContact] = contact;
		nbContact++;
	}
}

void	PhoneBook::print_contact(void)
{
	size_t	i;

	i = 0;
	while (i < nbContact)
	{
		print_index(i);
		std::cout << "|";
		print_names(this->contact_list[i].getFirst());
		std::cout << "|";
		print_names(this->contact_list[i].getLast());
		std::cout << "|";
		print_names(this->contact_list[i].getNickname());
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::find_index(void)
{
	size_t	i;

	i = 0;
	while(i < nbContact)
	{
		if (atoi(this->index.c_str()) == (int)(i))
		{
			std::cout << "\t" << "First Name: " << "\t" << this->contact_list[i].getFirst() << std::endl;
			std::cout << "\t" << "Last Name: " << "\t" << this->contact_list[i].getLast() << std::endl;
			std::cout << "\t" << "Nickname: " << "\t" << this->contact_list[i].getNickname() << std::endl;
			std::cout << "\t" << "Phone: " << "\t\t" << this->contact_list[i].getPhone() << std::endl;
			std::cout << "\t" << "Darkest secret: " << this->contact_list[i].getSecret() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "This index does not exist !" << std::endl;
}

void	print_index(size_t i)
{
	std::cout << std::setw(10) << std::right << i;
}

void	print_names(std::string name)
{
	if (name.size() > 10)
	{
		name = name.substr(0, 9);
		name.push_back('.');
	}
	std::cout << std::setw(10) << std::right << name;
}

size_t	PhoneBook::nbContact = 0;
