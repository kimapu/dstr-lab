//For Windows users, see below.
//To build the project-> use ctrl b
	// or, Project - Build All
	//For building the project for Binaries (machine-understandable code)

//To Run the project ->  use ctrl f11
	//or, Run -> Run

#include <iostream>

#include "lab1_controller.h"

using namespace std;

void menu()
{
	cout << "1) Lab 1" << endl;
	cout << "2) Lab 2" << endl;
	cout << "-99) Exit" << endl;

}

void handleAction(int opt)
{
	switch (opt) {
		case 1:
		{
			runLab1();
			break;
		}
		case 2:
		{
			cout << "\n> See you next week!" << endl;
			break;
		}
		case -99:
			cout << "\nProgram is leaving... Byes!" << endl;
			break;
		default:
			break;
	}


}

int main()
{
	char cont;
	do
	{
		menu();
		int opt;

		cout << "\n> Choose? " << endl;
		cin >> opt;

		handleAction( opt );

		cout << "\n> Do you want to continue? [Y for yes]" << endl;
		cin >> cont;
		cout << endl;
	}while(cont == 'Y' || cont == 'y');


	cout << "\n--------------------------------------------" << endl;
	cout << "> thankyou..." << endl;

	return 0;

}
