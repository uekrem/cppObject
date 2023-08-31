#include "Account.hpp"

int Account::getNbAccounts(){
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(){
    return (Account::_totalAmount);
}

int Account::getNbDeposits(){
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(){
    return (Account::_totalNbWithdrawals);
}