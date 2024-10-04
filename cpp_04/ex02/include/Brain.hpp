/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:36:42 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 11:35:16 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstring>

class Brain {

	public:

		Brain(void);
		Brain(Brain const & copy);
		Brain &	operator=(Brain const & src);
		~Brain(void);

		void		setIdeas(std::string str);
		void		setIdea(int index, std::string str);
		std::string	getIdea(int index) const;

	private:

		static const int	_size = 100;
		std::string			_ideas[_size];
};

#endif
