/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:46:06 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 09:47:18 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:

	Weapon(std::string name);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string new_type);


private:

	std::string _type;
};

#endif
