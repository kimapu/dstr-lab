/*
 * lab1_controller.h
 *
 *  Created on: May 20, 2022
 *      Author: kimlee
 */

#ifndef LAB_CONTROLLER_H_
#define LAB_CONTROLLER_H_

#define SIZE 10

#include <iostream>
#include <iomanip>
#include "lab1-function.h"
#include "lab2-function.h"
#include "lab3-function.h"
#include "lab4-bankaccount.h"
#include "lab4-cashregister.h"
#include "lab4-employee.h"
#include "lab4-population.h"
#include "lab5-struct-student.h"
#include "lab5-struct-student-linkedlist.h"
#include "lab6-class-student-linkedlist.h"

#include "bits/stdc++.h"

using namespace std;

void runLab6()
{
	cout << endl;
	cout << "--- Welcome to Lab 6 ---" << endl;

	int opt;
	cout << "1) Part A" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			/**
			 * PartA-Exe1+Exe2
			 */
			StudentCollection lst;
			int n = 0;
			//prompt the user for student #
			cout << "How many students? " << endl;
			cin >> n;

			for(int i = 0; i < n; ++i)
			{
				int id = 0;
				cout << "\n--- ENTER STUDENT ID #"<< (i+1) <<"---" << endl;
				cout << "Id? " << endl;
				cin >> id;

				lst.insert(id, "", 0);
			}
			//show
			lst.show();
			cout << endl;
			char next = 'n';
			do{
				//show
				lst.show();
				cout << endl;
				int opt = -1;
				cout << "\n--- MENU ---" << endl;
				cout << "1) Delete First Student" << endl;
				cout << "2) Delete Last Student" << endl;
				cout << "3) Delete Student by Index" << endl;
				cout << "4) Delete Student by ID" << endl;

				cout << "\nChoice? " << endl;
				cin >> opt;
				cout << endl;
				switch( opt )
				{
					case 1:
					{
						cout << "--- DELETE FIRST STUDENT OPTION ---" << endl;
						lst.deleteFirst();
						cout << "LOG:  First student is deleted..." << endl;
					}
					break;
					case 2:
					{
						cout << "--- DELETE LAST STUDENT OPTION ---" << endl;
						lst.deleteLast();
						cout << "LOG:  Last student is deleted..." << endl;
					}
					break;
					case 3:
					{
						cout << "--- DELETE STUDENT BY INDEX OPTION ---" << endl;
						int i = -1;
						cout << "Enter index? " << endl;
						cin >> i;
						lst.deleteItemAt(i);
						cout << "LOG:  Student #" << i << " is deleted..." << endl;
					}
					break;
					case 4:
					{
						cout << "--- DELETE STUDENT BY ID OPTION ---" << endl;
						int uid = -1;
						cout << "Enter student id? " << endl;
						cin >> uid;
						lst.remove(uid);
						cout << "LOG:  Student ID#" << uid << " is deleted..." << endl;
					}
					break;
					default:
						cout << "LOG: Invalid option!" << endl;
						break;
				}
				//show
				lst.show();
				cout << endl;

				cout << "\nDo you want to continue [y/n]? " << endl;
				cin >> next;

			}while( next != 'n' );


			cout << endl;
			cout << "============================================================" << endl;
			break;

		}

		default:
			break;
	}
}


void runLab5()
{

	cout << endl;
	cout << "--- Welcome to Lab 5 ---" << endl;

	int opt;
	cout << "1) Part A: Exe1" << endl;
	cout << "2) Part A: Exe2" << endl;
	cout << "3) Part A: Exe3" << endl;
	cout << "4) Part A: Exe4" << endl;
	cout << "5) Part A: Exe5" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			/**
			 * PartA-Exe1
			 */
			Student student;
			cout << "--- ENTER STUDENT ID ---" << endl;
			cout << "Id? " << endl;
			cin >> student.id;
			student.next = 0;

			cout << endl;

			cout << "You've been entered ";
			cout << "student id = " << student.id;
			cout << ", next student = " << student.next << endl;

			cout << "============================================================" << endl;
			break;

		}
		case 2:
		{
			/**
			 * PartA-Exe2
			 */
			StudentLinkedList lst;
			int n = 0;
			//prompt the user for student #
			cout << "How many students? " << endl;
			cin >> n;

			for(int i = 0; i < n; ++i)
			{
				int id = 0;
				cout << "\n--- ENTER STUDENT ID #"<< (i+1) <<"---" << endl;
				cout << "Id? " << endl;
				cin >> id;
				//insert id to linkedlist
				lst.insert(id, "", 0);
			}
			//show
			lst.show();

			cout << endl;
			cout << "============================================================" << endl;
			break;
		}
		case 3:
		{
			/**
			 * PartA-Exe3
			 */
			StudentLinkedList lst;
			int n = 0;
			//prompt the user for student #
			cout << "How many students? " << endl;
			cin >> n;

			for(int i = 0; i < n; ++i)
			{
				int id = 0;
				cout << "\n--- ENTER STUDENT ID #"<< (i+1) <<"---" << endl;
				cout << "Id? " << endl;
				cin >> id;
				lst.insertAndSorted(id);
			}
			//show
			lst.show();

			cout << endl;
			cout << "============================================================" << endl;

			break;
		}
		case 4:
		{
			/**
			 * PartA-Exe4
			 */
			StudentLinkedList lst;
			int n = 0;
			//prompt the user for student #
			cout << "How many students? " << endl;
			cin >> n;

			for(int i = 0; i < n; ++i)
			{
				int id = 0;
				string name = "";
				int age = 0;

				cout << "\n--- ENTER STUDENT ID #"<< (i+1) <<"---" << endl;
				cout << "Id? " << endl;
				cin >> id;

				cout << "Name? " << endl;
				cin >> name;

				cout << "Age? " << endl;
				cin >> age;

				lst.insert(id, name, age);
			}
			//show
			lst.show();

			cout << endl;
			cout << "============================================================" << endl;

			break;
		}
		default:
			break;
	}
}

void runLab4()
{

	cout << endl;
	cout << "--- Welcome to Lab 3 ---" << endl;

	int opt;
	cout << "1) Part A: Exe1" << endl;
	cout << "2) Part A: Exe2" << endl;
	cout << "3) Part A: Exe3" << endl;
	cout << "4) Part A: Exe4" << endl;
	cout << "5) Part A: Exe5" << endl;
//	cout << "2) Part B: Q1" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			/**
			 * PartA-Exe1
			 */
			cout << "--- Bank Account ---" << endl;
			int dollar, cent;

			BankAccount acc1;
			cout << "Enter dollar: " << endl;
			cin >> dollar;
			cout << "Enter cent: " << endl;
			cin >> cent;
			acc1.set(dollar, cent);

			cout << "\n> Account balance = " << fixed << setprecision(2) << acc1.get_balance() << endl;

			int amt;
			cout << "Enter amount to deposit: " << endl;
			cin >> amt;
			acc1.update(amt);

			cout << "\n> Account balance = " << fixed << setprecision(2) << acc1.get_balance() << endl;
			break;

		}
		case 2:
		{
			/**
			 * PartA-Exe2
			 */
			cout << "--- Cash Register Machine ---" << endl;

			CashRegister * cashRegister = new CashRegister();
			cashRegister->printBalance();

			cout << endl;
			cout << "Deposit[yes/no]? " << endl;
			string deposit;
			cin >> deposit;
			bool isDeposit = (deposit == "yes") ? true : false;
			if(isDeposit != false)
			{
				double amt;
				cout << "Enter amount: ";
				cin >> amt;
				cashRegister->acceptAmount(amt);
				cout << "Deposited " << amt << endl;
				cashRegister->printBalance();
			}else{
				cashRegister->printBalance();
			}
			delete cashRegister;
			break;
		}
		case 3:
		{
			/**
			 * PartA-Exe3
			 */
			Employee * emp1 = new Employee(47899, "susan", "accounting", "vice president");

			Employee * emp2 = new Employee(34522, "matthew");
			emp2->setDepartment("IT");
			emp2->setPosition("programmer");

			Employee * emp3 = new Employee();
			emp3->setId(65881);
			emp3->setName("james");
			emp3->setDepartment("manufacturing");
			emp3->setPosition("engineer");

			//show
			cout << "Employee 1 = " << emp1->toString() << endl;
			cout << "Employee 2 = " << emp2->toString() << endl;
			cout << "Employee 3 = " << emp3->toString() << endl;

			break;
		}
		case 4:
		{
			/**
			 * PartA-Exe4
			 */
			cout << "--- Population ---" << endl;
			int n;
			cout << "Enter population: ";
			cin >> n;

			if( n > 1 )
			{
				Population * p = new Population(n);
				cout << p->toString() << endl;

				try {

					int birthNo;
					cout << "Enter birth number: ";
					cin >> birthNo;
					cout << "Birth rate = " << p->birthRate(birthNo) << endl;

					int deathNo;
					cout << "Enter death number: ";
					cin >> deathNo;
					cout << "Death rate = " << p->deathRate(deathNo) << endl;


				} catch (invalid_argument &e) {
					cout << "Exception: " << e.what() << endl;
				}

				delete p;
			}
			else
			{
				cout << "ERROR: Invalid population number!" << endl;
			}


			break;
		}
		default:
			break;
	}
}


void runLab3()
{
	cout << endl;
	cout << "--- Welcome to Lab 3 ---" << endl;

	int opt;
	cout << "1) Part A: Q1" << endl;
	cout << "2) Part A: Q2" << endl;
	cout << "3) Part A: Exe1" << endl;
	cout << "4) Part A: Exe2" << endl;
	cout << "5) Part B: Q1" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			//demo-1
			ptAq1();
			break;

		}
		case 2:
		{
			//demo-2
			ptAq2();
			break;
		}
		case 3:
		{
			//exe-1
			ptAex1();
			break;
		}
		case 4:
		{
			int n1, n2;
			cout << "Enter two numbers: " << endl;
			cin >> n1;
			cin >> n2;

			cout << "--- BEFORE SWAPPING IN MAIN FUNCTION ---" << endl;
			cout << "Value of num1 = " << n1 << endl;
			cout << "Value of num2 = " << n2 << endl;
			cout << endl;

			swap(&n1, &n2);

			cout << "--- BEFORE SWAPPING IN MAIN FUNCTION ---" << endl;
			cout << "Value of num1 = " << n1 << endl;
			cout << "Value of num2 = " << n2 << endl;

			break;
		}
		case 5:
		{
			/**
			 * PartB
			 */
			int size;
			cout << "Enter the size of array: " << endl;
			cin >> size;

			int *arr = new int[size];
			cout << "\nNow, build an array with " << size << " columns." << endl;
			fillArr(arr, size);

			cout << endl;
			//show
			cout << "The array elements = ";
			for(int j = 0; j < size; j++)
			{
				cout << arr[j] << ", ";
			}
			delete arr;
			break;
		}
		default:
			break;
	}
}

void runLab2()
{
	cout << endl;
	cout << "--- Welcome to Lab 2 ---" << endl;

	int opt;
	cout << "1) Part A: Q1" << endl;
	cout << "2) Part A: Q2" << endl;
	cout << "3) Part A: Exe1" << endl;
	cout << "4) Part A: Exe2" << endl;
	cout << "5) Part B: Q1" << endl;
	cout << "6) Part B: Q2" << endl;
	cout << "7) Part B: Exe1" << endl;
	cout << "8) Part B: Exe2" << endl;
	cout << "9) Part B: Exe3" << endl;
	cout << "10) Part B: Exe4" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
		case 1:
		{
			//demo-1
			int n1, n2;
//			prompt the user for 2 integers
			cout << "Enter 2 integers: " << endl;
			cin >> n1;
			cin >> n2;

//			calling PartA-i
			int sum = 0;
			add2(n1, n2, sum); //Pass by value and Pass by reference (sum)

			cout << "Sum = " << sum << endl;
			break;

		}
		case 2:
		{
			//demo-2
			int n1, n2;
//			prompt the user for 2 integers
			cout << "Enter 2 integers: " << endl;
			cin >> n1;
			cin >> n2;

			add(n1, n2); //calling PartA-ii
			int sum = add(n1, n2); //calling PartA-ii - Pass by value...
			cout << "Sum = " << sum << endl;
			break;
		}
		case 3:
		{
			/**
			 * Part A: Exe1
			 */
			int arr[SIZE];

			int begin, end;
			cout << "Enter begin number: " << endl;
			cin >> begin;
			cout << "Enter end number: " << endl;
			cin >> end;

			fillEven( begin, end, arr, SIZE ); //pass array by reference...

			//show
			cout << "\n--- Even number list ---" << endl;
			for(int i = 0; i< SIZE; i++)
			{
				cout << arr[i] << endl;
			}
			break;
		}
		case 4:
		{
			/**
			 * Part A: Exe2
			 */
			string elapsedTm = prompt("Please enter your elapsed time (in HH:MM:SS format) = ");
			int elapsedTmInSecs = elapseTime( elapsedTm );
			cout << "Elapsed time in seconds = " << elapsedTmInSecs << " seconds" << endl;
			break;
		}
		case 5:
		{
			/**
			 * Part B: Q1
			 */
			int billy[] = {16, 2, 77, 40, 12071, 51};
			int len =  sizeof(billy)/sizeof(billy[0]);
			int total = sumOfArr(billy,  len);
			//show
			for (int i = 0; i < len; i++) {
				cout << billy[i] << " + ";
				if((len-1)== i)
					cout << " = " << total;
			}
			cout << endl;
			break;
		}
		case 6:
		{
			/**
			 * Part B: Q2
			 */
			int len = 5;
			int arr[len];
			//prompt user for arr elem
			for (int i = 0; i < len; ++i) {
				cout << "Enter your number " << (i+1) << " : ";
				cin >> arr[i];
			}
			int total = sumOfArr(arr,  len);
			//show
			for (int i = 0; i < len; i++) {
				cout << arr[i] << " + ";
				if((len-1)== i)
					cout << " = " << total;
			}
			cout << endl;
			break;
		}
		case 7:
		{
			/**
			 * Part B: Exe1
			 */
			string _in;
			cout << "Enter a palindrome number: " ;
			cin >> _in;

			int palindrome = isPalindrome(_in);
			if ( palindrome == 0) {
				cout << _in << " is a palindrome number." << endl;
			} else {
				cout << _in << " is a not palindrome number." << endl;
			}
			break;
		}
		case 8:
		{
			/**
			 * Part B: Exe2
			 */
			const int N = 8;
			int arr[N];

			//prompt user
			for( int i = 0; i < N;++i )
			{
				cout << "Enter number " << (i+1) << " : ";
				cin >> arr[i];
			}
			cout << endl;
			//sort function
			sort(arr, arr+N);
			//show
			cout << "Sorted = ";
			for( int i = 0; i < N;++i )
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		}
		case 9:
		{
			/**
			 * Part B: Exe3
			 */
			const int N = 8;
			int arr[N];

			//prompt user
			for( int i = 0; i < N;++i )
			{
				cout << "Enter number " << (i+1) << " : ";
				cin >> arr[i];
			}
			cout << endl;
			//user defined function
			mysort( arr, N );
			//show
			cout << "Sorted = ";
			for( int i = 0; i < N;++i )
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		}
		case 10:
		{
			/**
			 * Part B: Exe4
			 */
			int row, col;
			cout << "Enter the number of rows and columns of matrix" << endl;
			cin >> row;
			cin >> col;

			int matrix1[row][col];
			cout << "Enter the elements of first matrix" << endl;
			for(int i = 0; i < row ; ++i)
			{
				for(int j = 0; j < col; ++j)
				{
					cin >> matrix1[i][j];
				}
			}

			int matrix2[row][col];
			cout << "Enter the elements of second matrix" << endl;
			for(int i = 0; i < row ; ++i)
			{
				for(int j = 0; j < col; ++j)
				{
					cin >> matrix2[i][j];
				}
			}

			cout << "Sum of entered matrices:-" << endl;
			for(int i = 0; i < row ; ++i)
			{
				for(int j = 0; j < col; ++j)
				{
					int sum = matrix1[i][j] + matrix2[i][j];
					cout << sum << '\t';
				}
				cout << endl;
			}

			break;
		}
		default:
			break;
	}

}

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



#endif /* LAB_CONTROLLER_H_ */
