/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:28:11 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/15 09:44:58 by matle-br         ###   ########.fr       */
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
# include <vector>

template <typename T>
typename T::iterator	easyfind(T & lst, int nb_to_find);

# include "../src/easyfind.tpp"

#endif
