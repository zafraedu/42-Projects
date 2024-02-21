#include "Account.hpp"
#include <iostream> // std::cin, cout, endl
#include <iomanip>	// std::setw, setfill
#include <ctime>		// time(), localtime()

/* Initialize static variables */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Getters */

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
						<< "total:" << getTotalAmount() << ";"
						<< "deposits:" << getNbDeposits() << ";"
						<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

/* Constructor */

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
						<< "amount:" << this->_amount << ";"
						<< "created" << std::endl;
}

/* Destructor */

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
						<< "amount:" << this->_amount << ";"
						<< "closed" << std::endl;
}

/* Métodos publicos */

void Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";"
						<< "p_amount:" << this->_amount << ";" << std::flush;
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";"
						<< "amount:" << this->_amount << ";"
						<< "nb_deposit:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
						<< "p_amount:" << this->_amount << ";"
						<< "withdrawal:" << std::flush;
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";" << std::flush;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";"
						<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
						<< "amount:" << this->_amount << ";"
						<< "deposits:" << this->_nbDeposits << ";"
						<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

/* Método privado */

void Account::_displayTimestamp(void)
{
	std::time_t result = std::time(NULL);
	std::tm *timeInfo = std::localtime(&result);

	std::cout << "[" << std::setfill('0') << 1900 + timeInfo->tm_year
						<< std::setw(2) << 1 + timeInfo->tm_mon
						<< std::setw(2) << std::setfill('0') << timeInfo->tm_mday << "_"
						<< std::setw(2) << std::setfill('0') << timeInfo->tm_hour
						<< std::setw(2) << std::setfill('0') << timeInfo->tm_min
						<< std::setw(2) << std::setfill('0') << timeInfo->tm_sec
						<< "] " << std::flush;
}
