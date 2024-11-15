/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:42:40 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/15 10:25:25 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T & lst, int nb_to_find)
{
	return std::find(lst.begin(), lst.end(), nb_to_find);
}
