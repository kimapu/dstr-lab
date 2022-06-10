/*
 * lab2_function.h
 *
 *  Created on: May 23, 2022
 *      Author: kimlee
 */

#ifndef LAB2_FUNCTION_H_
#define LAB2_FUNCTION_H_

#include "bits/stdc++.h" //include this for reverse function


/**
 * PartA-Q1:
 */
void add2(int n1, int n2, int& sum)
{
	sum = n1 + n2;
}

/**
 * PartA-Q2:
 */
int add(int n1, int n2)
{
	return n1 + n2;
}

/**
 * PartA-Exe1:
 */
void fillEven( int begin, int end, int arr[], int size )
{
    for(int i = begin, j = 0; (i <= end && j < size); i++)
    {
        if( i % 2 == 0 )
        {
            arr[j] = i;
            j++;
        }
    }
}


/**
 * PartB-Q1: summation of array values
 */
int sumOfArr(int arr[], int length)
{
	int sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}

/**
 * Part B: Exe1
 */
int isPalindrome(string str)
{
	if( str.length() % 2 == 0 ) return -1;
	string temp = str;
	reverse(temp.begin(), temp.end());
	return str.compare(temp);
}

/**
 * Part B: Exe3
 */
void mysort( int arr[], int n)
{
	sort(arr, arr+n);
}

#endif /* LAB2_FUNCTION_H_ */
