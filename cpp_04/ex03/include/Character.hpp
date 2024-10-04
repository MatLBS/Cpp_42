/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:51:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 16:42:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {

public:

	Character(std::string const & name);
	Character(Character const & copy);
	Character &	operator=(Character const & src);
	virtual ~Character(void);

	std::string const & getName() const;
	void				equip(AMateria* m);
	void				unequip(int index);
	void				use(int index, ICharacter& target);

protected:

	std::string			_name;
	static const int	_size = 4;
	AMateria			*_inventory[_size];

};

#endif
