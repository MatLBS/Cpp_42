/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:13:31 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 16:28:58 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {

public:

	Ice(void);
	Ice(Ice const & copy);
	Ice &	operator=(Ice const & src);
	~Ice(void);


	virtual std::string const & getType() const;

	Ice* clone() const;
	void use(ICharacter& target);

private:

	std::string	_type;

};

#endif
