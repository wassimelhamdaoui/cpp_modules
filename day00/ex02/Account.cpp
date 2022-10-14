/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:02:52 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/08 22:39:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<< _accountIndex << ";amount:" << _amount << ";created"<<std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

void	Account::displayAccountsInfos( )
{
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amounts:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amounts:"<<_amount<<";deposit:"<<deposit<<";amount:"<<_amount+deposit<<";nb_deposits:"<<_nbDeposits<<std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amounts:"<<_amount;
	if(_amount >= withdrawal){
		_amount -=withdrawal;
		_nbWithdrawals+=1;
		std::cout<<";withdrawal:"<<withdrawal<<";amount:"<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	}
	else{
		std::cout<<";withdrawal:refused"<<std::endl;
		return(false);
	}
	return(true);	
}

void Account::_displayTimestamp( void ){
	time_t timer;
    char buffer[20];
    struct tm* tm_info;

    timer = time(NULL);
    tm_info = localtime(&timer);

    strftime(buffer, 20, "[%Y%m%d_%H%M%S]", tm_info);
    std::cout<<buffer<<" ";
}