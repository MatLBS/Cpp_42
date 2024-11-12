/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:47:36 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 19:14:11 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array(void): _len(0) {
	// std::cout << "Constructor default called." << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _len(0)
{
	// std::cout << "Constructor int called." << std::endl;
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_array[i] = 42;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <typename T>
T	Array<T>::at(int index)
{
	std::cout << index << std::endl;
	std::cout << this->size() << std::endl;
	std::cout << this->_array[4] << std::endl;
	if (index < 0 || index >= (int)this->size())
		throw Array::IndexOutOfBounds();
	return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size(void)
{
	for (int i = 0; this->_array[i]; i++)
	{
		if (this->_array[i])
			this->_len++;
	}
	return this->_len;
}
