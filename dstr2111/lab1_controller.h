/*
 * lab1_controller.h
 *
 *  Created on: May 20, 2022
 *      Author: kimlee
 */

#ifndef LAB1_CONTROLLER_H_
#define LAB1_CONTROLLER_H_

#include "lab1_function.h"
#include <iostream>

using namespace std;

void runLab1()
{
	cout << endl;
	cout << "--- Welcome to Lab 1 ---" << endl;

	int opt;
	cout << "1) Part A: Q1" << endl;
	cout << "2) Part A: Q2" << endl;
	cout << "3) Part A: Exe1" << endl;
	cout << "4) Part A: Exe2" << endl;
	cout << "5) Part B: Q1" << endl;
	cout << "6) Part B: Q2" << endl;
	cout << "7) Part B: Exe1" << endl;
	cout << "8) Part C: Q1" << endl;
	cout << "9) Part C: Exe1" << endl;
	cout << "10) Part C: Exe2" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			//demo-1
			greet("hello world!");
			cout << endl;
			cout << endl;
			break;

		}
		case 2:
		{
			//demo-2
			string reply;
			reply = prompt("How are you?");
			cout << "> Your answered: " << reply;
			break;
		}
		case 3:
		{
			//exe-1
			string elapsedTm = prompt("Please enter your elapsed time (in HH:MM:SS format) = ");
			int elapsedTmInSecs = elapseTime( elapsedTm );
			cout << "Elapsed time in seconds = " << elapsedTmInSecs << " seconds" << endl;
			break;
		}
		case 4:
		{
			//exe-2
			cout << "Rectangle A: " << endl;
			int w1, h1;
			cout << "> Width = ";
			cin >> w1;
			cout << "> Height = ";
			cin >> h1;
			cout << endl;

			cout << "Rectangle B: " << endl;
			int w2, h2;
			cout << "> Width = ";
			cin >> w2;
			cout << "> Height = ";
			cin >> h2;
			cout << endl;

			double areaRectA = computeArea(w1, h1);
			double areaRectB = computeArea(w2, h2);

			if ( areaRectA > areaRectB ) {
				cout << "Area in rectangle A is bigger than rectangle B" << endl;
			} else {
				cout << "Area in rectangle B is bigger than rectangle A" << endl;
			}
			break;
		}
		case 5:
		{
			int first, second;
			cout << "Enter two integers: ";
			cin >> first;
			cin >> second;

			bool multipleOf = multiple(first, second);
			if ( multipleOf != true ) {
				cout << first << " is not a multiple of " << second << endl;
			} else {
				cout << first << " is a multiple of " << second << endl;
			}
			break;
		}
		case 6:
		{
			int n;
			cout << "Enter a number between 1 and 10: " << endl;
			cin >> n;
			if ( n > 0 && n < 11 ) {
				string romanLiteral = roman( n );
				cout << "Roman literal for " << n << ": " << romanLiteral << endl;
			} else {
				cout << ">> Invalid input!" << endl;
			}
			break;
		}
		case 7:
		{
			cout << "Enter 3 scores (quiz, mid-term, final) values separated by space: " << endl;
			int q, mt, f;
			cin >> q;
			cin >> mt;
			cin >> f;
			char grade = grader( q, mt, f);
			cout << "> Grade " << grade << endl;
			break;
		}
		case 8:
		{
			printEven(50);
			break;
		}
		case 9:
		{
			cout << "Enter positive number: " << endl;
			int n;
			cin >> n;
			if( n < 0) cout << "Invalid number!" << endl;
			else
				cout << "Sum of " << n << " : " << sum(n) << endl;
			break;
		}
		case 10:
		{
			cout << "Enter amount of time running in minute: " << endl;
			int min;
			cin >> min;
			cout << "Calories burned for " << min <<" minutes: " << calories( min ) << endl;
			break;
		}
		default:
			break;
	}

}



#endif /* LAB1_CONTROLLER_H_ */
