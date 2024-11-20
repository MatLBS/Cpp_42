/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:41:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/19 16:08:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>
# include <list>

template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T> {

public:

	MutantStack(void);
	MutantStack(MutantStack const & copy);
	MutantStack &	operator=(MutantStack const & src);
	~MutantStack(void);

	typedef typename Container::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}

private:


};

# include "../src/MutantStack.tpp"

#endif
