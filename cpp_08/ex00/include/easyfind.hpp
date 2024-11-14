/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:28:11 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/14 17:59:54 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <algorithm>
# include <stdint.h>
# include <ctime>
# include <typeinfo>
# include <bits/stdc++.h>
# include <list>
# include <iterator>

template <typename T>
int	easyfind(T & lst, int nb_to_find)
{
	int	index = 0;
	for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
	{
		if (*i == nb_to_find)
			return index;
		index++;
	}
	return -1;
}

#endif
