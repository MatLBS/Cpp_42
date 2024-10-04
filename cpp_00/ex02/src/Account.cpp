/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:02:00 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:46:35 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";amount:" << BLEU_CLAIR << this->_amount << RESET << ";created" << std::endl;
	return;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";amount:" <<  BLEU_CLAIR << this->_amount << RESET << ";closed" << std::endl;
	return;
}


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << BLEU_CLAIR << Account::_nbAccounts << RESET << ";total:" << BLEU_CLAIR << Account::_totalAmount \
	<< RESET << ";deposits:" << BLEU_CLAIR << Account::_totalNbDeposits << RESET << ";withdrawals:" << BLEU_CLAIR << Account::_totalNbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";p_amount:" << BLEU_CLAIR << p_amount << RESET << ";deposit:" \
	<< BLEU_CLAIR << deposit << RESET << ";amount:" << BLEU_CLAIR << this->_amount << RESET << ";nb_deposits:" << BLEU_CLAIR << this->_nbDeposits << RESET << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

	p_amount = this->_amount;
	this->_amount -= withdrawal;
	if (this->_amount < 0)
	{
		this->_amount = p_amount;
		Account::_displayTimestamp();
		std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";p_amount:" << BLEU_CLAIR << p_amount << RESET << ";withdrawal:refused" << std::endl;
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		Account::_displayTimestamp();
		std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";p_amount:" << BLEU_CLAIR << p_amount << RESET << ";withdrawal:" \
		<< BLEU_CLAIR << withdrawal << RESET << ";amount:" << BLEU_CLAIR << this->_amount << RESET << ";nb_withdrawals:" << BLEU_CLAIR << this->_nbWithdrawals << RESET << std::endl;
	}
	return (1);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLEU_CLAIR << this->_accountIndex << RESET << ";amount:" << BLEU_CLAIR << this->_amount << RESET <<\
	";deposits:" << BLEU_CLAIR << this->_nbDeposits << RESET << ";withdrawals:" << BLEU_CLAIR << this->_nbWithdrawals << RESET << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char buffer [80];

	std::time_t rawtime = std::time(NULL);
	std::tm *timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
