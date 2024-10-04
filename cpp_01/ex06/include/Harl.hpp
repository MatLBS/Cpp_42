/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:57:39 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 15:15:11 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	public:

	Harl(void);
	~Harl(void);

	void complain(std::string level);

	private:

	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error (void);
};

#endif
