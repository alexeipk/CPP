/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:16:41 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 18:46:55 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//Getters
int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() <<  ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}

//Constructor
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

//Destructor
Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

//Make a deposit
void	Account::makeDeposit( int deposit ) {
	int	oldAmount;
	
	this->_nbDeposits++;
	oldAmount = this->_amount;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << oldAmount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

//Check if the account has enough money to withdraw
bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

//Check value of the account
int		Account::checkAmount( void ) const {
	return this->_amount;
}

//Print information of account
void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

//Print timestamp an specific format
void	Account::_displayTimestamp( void ) {
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[100];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(buffer, 100, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}
