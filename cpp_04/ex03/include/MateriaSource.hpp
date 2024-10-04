/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:11:05 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 16:52:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "../include/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & copy);
	MateriaSource &	operator=(MateriaSource const & src);
	virtual ~MateriaSource(void);

	void		learnMateria(AMateria *m);
	AMateria*	createMateria(std::string const & type);

protected:

	static const int	_size = 4;
	AMateria			*_inventory[_size];

};

#endif
