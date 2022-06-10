/*
 * lab3_function.h
 *
 *  Created on: May 27, 2022
 *      Author: kimlee
 */

#ifndef LAB3_FUNCTION_H_
#define LAB3_FUNCTION_H_

#include <iostream>

using namespace std;

/**
 * PartA-Q1
 */
void ptAq1()
{

	string word = "abc";
	int i = 1;
	float real = 10.4f;
	long long bigInt = 98989898911;

	/**
	 * prints variable value with their memory addresses
	 */
	cout << "Value of character: " << word << ", Address of character: " << addressof(word) << endl;
	cout << "Value of integer: " << i << ", Address of integer: " << &i << endl;
	cout << "Value of real: " << i << ", Address of real: " << &real << endl;
	cout << "Value of bigInteger: " << i << ", Address of bigInteger: " << &bigInt << endl;

}
/**
 * PartA-Q2
 */
void ptAq2()
{
	int num = 10;
	int *ptr;

	ptr = &num;

	cout << "Address of num = " << &num << endl;
	cout << "Value of num = " << num << endl << endl;

	cout << "Address of ptr = " << &ptr << endl;
	cout << "Value of ptr = " << ptr << endl;
	cout << "Value pointed by ptr = " << *ptr << endl;
}

/**
 * PartA-Exe1
 */
void ptAex1()
{
	int n1, n2, sum;
	int *ptr1, *ptr2;

	cout << "Enter two numbers: " << endl;
	cin >> n1;
	cin >> n2;

	ptr1 = &n1;
	ptr2 = &n2;

	cout << "Address of num1 = " << &n1 << " ; Value of num1 = " << n1 << endl;
	cout << "Address of num2 = " << &n2 << " ; Value of num2 = " << n2 << endl;
	cout << endl;
	cout << "Address of ptr1 = " << &ptr1 << " ; Value of ptr1 = " << *ptr1 << endl;
	cout << "Address of ptr2 = " << &ptr2 << " ; Value of ptr2 = " << *ptr2 << endl;

	sum = *ptr1 + *ptr2;
	cout << "\nSum = " << sum << endl;

}


/**
 * PartA-Exe2
 */
void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	cout << "--- AFTER SWAPPING IN SWAP FUNCTION ---" << endl;
	cout << "Value of num1 = " << *ptr1 << endl;
	cout << "Value of num2 = " << *ptr2 << endl;
	cout << endl;
}

/**
 * PartB
 */
void fillArr(int *arr, int size)
{
	cout << "Enter elements in the developed array: " << endl;
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

}


#endif /* LAB3_FUNCTION_H_ */
