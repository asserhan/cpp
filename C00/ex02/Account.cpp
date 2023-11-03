/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:57:10 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/03 18:39:27 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

//initialize static variables
 int Account ::	_nbAccounts = 0;
 int Account ::	_totalAmount = 0;
 int Account ::	_totalNbDeposits = 0;
 int Account ::	_totalNbWithdrawals = 0;


void Account::_displayTimestamp( void )
{
    std :: time_t t = std :: time(0);
    struct tm *times = std :: localtime(&t);
    std :: cout << "[" << times->tm_year + 1900;
    if(times->tm_mon < 10)
        std :: cout << "0";
    std :: cout << times->tm_mon;
    if(times->tm_mday < 10)
        std :: cout << "0";
    std :: cout << times->tm_mday ;
    std :: cout << "_";
    if(times->tm_hour < 10)
        std :: cout << "0";
    std :: cout << times->tm_hour;
    if(times->tm_min < 10)
        std :: cout << "0";
    std :: cout << times->tm_min;
    if(times->tm_sec < 10)
        std :: cout << "0";
    std :: cout << times->tm_sec << "] ";
    return ;
    
}
//getters
int Account ::	getNbAccounts( void ){
    return _nbAccounts;
}
	
int Account ::	getTotalAmount( void ){
    return _totalAmount;
}
	
int Account ::	getNbDeposits( void ){
    return _totalNbDeposits;
}
	
int Account ::	getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}
//default constructor
Account :: Account(void) : _accountIndex(_nbAccounts),
                           _amount(0),
                           _nbDeposits(0),
                          _nbWithdrawals(0)
{
    _nbAccounts++;
    return ;
}
//constructor
Account :: Account( int initial_deposit ) : _accountIndex(_nbAccounts),
                                            _amount(initial_deposit),
                                            _nbDeposits(0),
                                            _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += _amount;
    this->_displayTimestamp();
    std :: cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "created" << std :: endl;
    return ;
}
//destructor
Account :: ~Account( void )
{
    _nbAccounts--;
    this->_displayTimestamp();
    std :: cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "closed" << std :: endl;
    return ;
}
//display account info
void Account :: displayAccountsInfos( void )
{
    _displayTimestamp();
    std :: cout <<"accounts:" << getNbAccounts() << ";"
                <<"total:" << getTotalAmount() << ";"
                <<"deposits:" << getNbDeposits() << ";"
                <<"withdrawals:" << getNbWithdrawals() << std :: endl;
    return ;
}
//display account status
void Account :: displayStatus ( void ) const
{
    this->_displayTimestamp();
    std :: cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "deposits:" << _nbDeposits << ";"
                << "withdrawals:" << _nbWithdrawals << std :: endl;
    return ;
}
//deposit
void	Account :: makeDeposit( int deposit ){
    this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std :: cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";"
                << "deposit:" << deposit << ";"
                << "amount:" << _amount + deposit << ";"
                << "nb_deposits:" << _nbDeposits << std :: endl; 
    return ;
}
//withdraw
int	Account :: checkAmount( void ) const{
    return _amount;
}
bool  Account :: makeWithdrawal( int withdrawal ){
    this->_displayTimestamp();
    std :: cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";" ;
    if(_amount < withdrawal)
    {
        std :: cout << "withdrawal:refused" << std :: endl;
        return false;
    }
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        std :: cout << "withdrawal:" << withdrawal << ";"
                    << "amount:" << _amount << ";"
                    << "nb_withdrawals:" << _nbWithdrawals << std :: endl;
        return true;
}
