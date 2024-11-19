/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:34:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/19 09:54:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <algorithm>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

class ScalarConverter {

public:

	static void *	convert(std::string test);

private:

	ScalarConverter(void);
	ScalarConverter(ScalarConverter const & copy);
	ScalarConverter & operator=(ScalarConverter const & src);
	~ScalarConverter(void);

};

#endif
