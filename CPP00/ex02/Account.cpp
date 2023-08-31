#include "Account.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (_nbAccounts); 
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int Account::checkAmount() const
{
	return (_amount);
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index: " << _accountIndex 
			<< ";" << "amount: " << checkAmount()
			<< ";" << "created" << std::endl;
	_totalAmount += _amount;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex
			<< ";" << "amount: " << _amount
			<< ";" << "closed" << std::endl ;
	return ;
}

void Account::_displayTimestamp()
{
	std::time_t t = std::time(NULL);
	std::tm now = *localtime(&t);
	std::cout
		<< "["
		<< (now.tm_year + 1900)
		<< std::setfill('0')
		<< std::setw(2) << now.tm_mon + 1
		<< std::setw(2) << now.tm_mday << "_"
		<< std::setw(2) << now.tm_hour
		<< std::setw(2) << now.tm_min
		<< std::setw(2) << now.tm_sec
		<< "] ";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts: " << getNbAccounts()
				<< ";" << "total: " << getTotalAmount()
				<< ";" << "deposits: " << getNbDeposits()
				<< ";" << "withdrawals: " << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex
				<< ";" << "amount: " << _amount
				<< ";" << "deposits: " << _nbDeposits
				<< ";" << "withdrawals: " << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex
			<< ";" << "p_amount: " << _amount
			<< ";" << "deposit: " << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";" << "amount: " << _amount
			<< ";" << "nb_deposits: " << ++_nbDeposits
			<< std::endl;
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index: " << _accountIndex << ";"
			<< "p_amount: " << _amount << ";"
			<< "withdrawal: ";
    std::cout << std::endl << withdrawal << std::endl;
	if (_amount < withdrawal){
		std::cout << "refused" << std::endl;
		return false;
	}
	else{
		std::cout << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "amount: " << _amount
				<< ";" << "nb_withdrawals: " << _nbWithdrawals
				<< std::endl;
				return true;
	}
}
