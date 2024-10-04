/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:03:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/24 15:00:41 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <csignal>
#include <iomanip>

class Contact {

	public:

	Contact(void);
	~Contact(void);

	void		fill_info(void);
	std::string	getFirst(void) const;
	std::string	getLast(void) const;
	std::string	getNickname(void) const;
	std::string	getPhone(void) const;
	std::string	getSecret(void) const;

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
