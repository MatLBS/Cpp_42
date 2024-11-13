/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:47:36 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/13 15:03:39 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array(void): _len(0) {
	this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n): _len(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(Array const & copy)
{
	*this = copy;
}

template <typename T>
Array<T> &	Array<T>::operator=(Array const & src)
{
	if (this != &src)
	{
		this->_len = src.size();
		this->_array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			this->_array[i] = src._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return this->_len;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= (int)this->size())
		throw Array::IndexOutOfBounds();
	return this->_array[index];
}
