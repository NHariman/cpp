/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/21 13:16:43 by nhariman      #+#    #+#                 */
/*   Updated: 2021/09/24 19:37:27 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

static void	_displayTimestamp( void )
{
	int current_month;
	std::time_t ttime = std::time(0);
	std::tm *local_time = std::localtime(&ttime);

	current_month = 1 + local_time->tm_mon;
	std::cout << "[";
	std::cout << 1900 + local_time->tm_year;
	if (current_month < 10)
		std::cout << "0";
	std::cout << current_month;
	std::cout << local_time->tm_mday;
	std::cout << "_" << local_time->tm_hour
		<< 1 + local_time->tm_min << 1 + local_time->tm_sec << "] ";
}

static int Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

static int Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits( void )
{
	return (this->totalNbDeposits);
}

static int	Account::getNbWithdrawals( void );
{
	return (this->totalNbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;

}

Account( int initial_deposit )
{
	_accountIndex = getNbAccounts() + 1;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}

~Account( void )
{
	std::cout << "index:" << getAmount
}

void	makeDeposit( int deposit )
{
	
}
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;
