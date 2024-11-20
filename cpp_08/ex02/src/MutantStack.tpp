/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:41:12 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/19 13:39:12 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(void){}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const & copy)
{
	*this = copy;
}

template <typename T, class Container>
MutantStack<T, Container> &	MutantStack<T, Container>::operator=(MutantStack const & src)
{
	(void)src;
	return *this;
}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack(void){}


