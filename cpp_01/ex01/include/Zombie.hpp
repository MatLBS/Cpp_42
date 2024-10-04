/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:15:58 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:49:59 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:

	Zombie(void);
	~Zombie(void);
	void	set_name(std::string name);

	void	announce(void);

	private:

	std::string	_name;
};

#endif
