/*
 * lab4-function.h
 *
 *  Created on: Jun 3, 2022
 *      Author: kimlee
 */

#ifndef LAB4_BANKACCOUNT_H_
#define LAB4_BANKACCOUNT_H_

#include <iostream>

using namespace std;

/**
 * PartA-Exe1-BankAccount
 */
class BankAccount
{
	private:
	double balance;
	double interest_rate;

	public:
	void set(int dollas, int cents);
	void update(double amount);
	double get_balance();
	double get_rate();
	void set_rate(int rate);
};

void BankAccount :: set(int dollas, int cents)
{
	double dbl_cent = cents;
	balance = dollas + dbl_cent/100;
}

void BankAccount :: update(double amount)
{
	balance += amount;
}

double BankAccount :: get_balance()
{
	return balance;
}

double BankAccount :: get_rate()
{
	return interest_rate;
}

void BankAccount :: set_rate(int rate)
{
	interest_rate = rate;
}

#endif /* LAB4_BANKACCOUNT_H_ */
