/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:17:35 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/24 15:00:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <vector>
#include <iomanip>
# include "contact.hpp"

class PhoneBook {

	public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add_contact(const Contact& contact);
	void	print_contact(void);
	void	find_index(void);
	std::string	index;


	private:

	Contact contact_list[8];
	static size_t	nbContact;
};

#endif
