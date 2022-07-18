//For Windows users, see below.
//To build the project-> use ctrl b
	// or, Project - Build All
	//For building the project for Binaries (machine-understandable code)

//To Run the project ->  use ctrl f11
	//or, Run -> Run

#include <iostream>

#include "lab_controller.h"

using namespace std;

void menu()
{
	cout << "1) Lab 1" << endl;
	cout << "2) Lab 2" << endl;
	cout << "3) Lab 3" << endl;
	cout << "4) Lab 4" << endl;
	cout << "5) Lab 5" << endl;
	cout << "6) Lab 6" << endl;
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
			runLab2();
			break;
		}
		case 3:
		{
			runLab3();
			break;
		}
		case 4:
		{
			runLab4();
			break;
		}
		case 5:
		{
			runLab5();
			break;
		}
		case 6:
		{
			runLab6();
			break;
		}
		case -99:
			cout << "\n--------------------------------------------" << endl;
			cout << "> thankyou..." << endl;
			exit(0);
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
