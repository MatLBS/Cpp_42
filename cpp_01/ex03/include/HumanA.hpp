/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:03:59 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:52:14 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);


	void	attack(void);

	private:

	Weapon& _weapon;
	std::string _name;

};

#endif
