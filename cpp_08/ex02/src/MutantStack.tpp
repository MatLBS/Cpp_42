/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:41:12 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/27 15:42:10 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void){}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack const & src)
{
	(void)src;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void){}


