#include "Account.class.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts += 1;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
    return;
}

void    Account::makeDeposit( int deposit )
{
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    Account::displayAccountsInfos();
    std::cout << "index:" << this->_accountIndex << "p_amount:" << p_amount << "deposit:" << deposit
        << "amount:" << this->_amount << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount >= withdrawal)
    {

        return (true);
    } else
        return (false);
}

void    Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << "amount:" << this->_amount
        << "deposits:" << this->_nbDeposits << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << "total:" << Account::_totalAmount
        << "deposits:" << Account::_totalNbDeposits << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    std::cout << "[" << __TIMESTAMP__ << "] ";
}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;