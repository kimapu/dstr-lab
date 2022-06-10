/*
 * lab1.h
 *
 *  Created on: May 11, 2022
 *      Author: kimlee
 */

#ifndef LAB1_FUNCTION_H_
#define LAB1_FUNCTION_H_

#include <iostream>

using namespace std;


/**
 * Part A: Q1
 * function greet(string)
 */
void greet(string message)
{
	cout << message;
}


/**
 * Part A: Q2
 * function prompt(string)
 */
string prompt(string question)
{
	string input;
	cout << question << endl;
	cin >> input;
	return input;
}

/**
 * Part A: Exe1
 */
int elapseTime( string t )
{
	int h, m, s= 0;
	std::string time = t ;

	int secs;
	//https://www.cplusplus.com/reference/cstdio/sscanf/
	if (sscanf(time.c_str(), "%d:%d:%d", &h, &m, &s) >= 2)
	{
	  secs = h *3600 + m*60 + s;
	}
	return secs;
}

/**
 * Part A: Exe2
 */
double computeArea( int w, int h )
{
	return w * h;
}

/**
 * Part B: determine first is a multiple of the second
 */
bool multiple(int first, int second)
{
	return second % first != 0;
}

/**
 * Part B: Use a switch statement to display the Roman numeral version of that number
 */
string roman(int n)
{
	string romanLiteral;
	switch (n) {
		case 1:
			romanLiteral = "I";
			break;
		case 2:
			romanLiteral = "II";
			break;
		case 3:
			romanLiteral = "III";
			break;
		case 4:
			romanLiteral = "IV";
			break;
		case 5:
			romanLiteral = "V";
			break;
		case 6:
			romanLiteral = "VI";
			break;
		case 7:
			romanLiteral = "VII";
			break;
		case 8:
			romanLiteral = "VIII";
			break;
		case 9:
			romanLiteral = "IX";
			break;
		case 10:
			romanLiteral = "X";
			break;
		default:
			romanLiteral = "NULL";
			break;
	}
	return romanLiteral;
}

/**
 * Part B: etermine the grade based on quiz , mid-term, and final scores
 */
char grader(int q, int mt, int f)
{
	double percent = (q+mt+f) / 300 * 100;
	if( percent >= 90 ) return 'A';
	else if( percent >= 70 && percent < 90 ) return 'B';
	else if( percent >= 50 && percent < 70 ) return 'C';
	else return 'F';
}

/**
 * Part C: print the even number that in the between of 1 to 50
 */
void printEven(int max)
{
	int count = 1;
	while( count <= max)
	{
		if(count % 2 == 0) cout << "\t" << count;
		count++;
	}
}

/**
 * Part C: get the sum of all the integers from 1 up to the number entered
 */
int sum(int n)
{
	int total = 0;
	for(int i = 1; i <= n; i++)
	{
		total += i;
	}
	return total;
}

/**
 * Part C: Running on a particular treadmill you burn 3.9 calories per minute. Write a program that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30 minutes
 */
float calories( int minute )
{
	const float CALORY_BURNED_PER_MINUTE = 3.9;
	float caloryburned = 0;
	for(int i = 0; i < minute; i++)
	{
		caloryburned += (i*CALORY_BURNED_PER_MINUTE);
	}
	return caloryburned;
}


#endif /* LAB1_FUNCTION_H_ */
