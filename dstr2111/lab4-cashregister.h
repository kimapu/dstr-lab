/*
 * lab4-cashregister.h
 *
 *  Created on: Jun 10, 2022
 *      Author: kimlee
 */

#ifndef LAB4_CASHREGISTER_H_
#define LAB4_CASHREGISTER_H_

# include <iostream>

using namespace std;

/**
 * PartA-Exe2-CashRegister
 */
class CashRegister
{
	double cashOnHand;

	/**
	 * constructor function
	 */
	public:
	CashRegister()
	{
		this->cashOnHand = 500.0;
	}

	~CashRegister()
	{
		cout << "--- Cash Register Deleted ---" << endl;
	}

	void cashRegister(double amount)
	{
		this->cashOnHand += amount;
	}

	public:
	void acceptAmount(double amount)
	{
		this->cashRegister(amount);
	}

	void printBalance()
	{
		cout << "> Cash on hand = " << this->cashOnHand << endl;
	}
};



#endif /* LAB4_CASHREGISTER_H_ */
