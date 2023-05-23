/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:55:13 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 12:55:14 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
//#include <fstream>

//*******************************************//
//            NON-MEMBERS FUNCTIONS          //
//*******************************************//

int     Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int     Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int     Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;

}
//*******************************************//
//         CONSTRUCTORS/DESTRUCTORS          //
//*******************************************//

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

//*******************************************//
//             MEMBERS FUNCTIONS             //
//*******************************************//

void    Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	if (deposit > 0)
	{
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
	}
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
		std::cout << ";withdrawal:refused" << std::endl;
	else
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (1);
}

//amount verification
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

//*******************************************//
//               TIME TREATMENT              //
//*******************************************//

/*void	Account::_displayTimestamp( void )
{
	static	std::time_t time_now = std::time(NULL);
	std::cout << "[" << std::put_time(std::localtime(&time_now), "%Y%m%d_%H%M%S") << "] ";

}*/

/*void	Account::_displayTimestamp( void )
{
	std::time_t		timestamp = std::time(0);
	tm					*time = localtime(&timestamp);
	std::cout << "["
					<< time->tm_year + 1900
					<< time->tm_mon
					<< time->tm_mday
					<< "_"
					<< time->tm_hour
					<< time->tm_min
					<< time->tm_sec
					<< "] ";
					
}*/

void	Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	struct tm	t_struct;
	char		buff[20];
	
	t_struct = *localtime(&now);
	strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S] ", &t_struct);
	std::cout << buff;


}
//*******************************************//
//               STATICS    VAR              //
//*******************************************//

int     Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
