/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:13:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/24 11:53:53 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

Contact::Contact(void) {
	// std::cout << "Constructor Contact called" << std::endl;
	return;
}

Contact::~Contact(void) {
	// std::cout << "Destructor Contact called" << std::endl;
	return;
}

void	Contact::fill_info(void)
{
	std::cout << "First name : ";
	std::cin.ignore();
	std::getline(std::cin, this->first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->darkest_secret);
}

std::string		Contact::getFirst(void) const
{
	return (this->first_name);
}

std::string		Contact::getLast(void) const
{
	return (this->last_name);
}

std::string		Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string		Contact::getPhone(void) const
{
	return (this->phone_number);
}

std::string		Contact::getSecret(void) const
{
	return (this->darkest_secret);
}
