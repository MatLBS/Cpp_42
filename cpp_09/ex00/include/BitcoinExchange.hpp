/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:44:35 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/20 16:59:45 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <cstring>
# include <map>
# include <fstream>
# include <string>
# include <cstdlib>

class Bitcoin {

public:

	Bitcoin(void);
	// Bitcoin(Bitcoin const & copy);
	// Bitcoin & operator=(Bitcoin const & src);
	~Bitcoin(void);

	static void	read_input(std::string str, std::map<std::string, double> data);

private:

	std::map<std::string, double>	map;

};

#endif
