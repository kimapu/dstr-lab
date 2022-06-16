/*
 * lab4-employee.h
 *
 *  Created on: Jun 10, 2022
 *      Author: kimlee
 */

#ifndef LAB4_EMPLOYEE_H_
#define LAB4_EMPLOYEE_H_

# include <iostream>
# include <string>

using namespace std;

class Employee
{
	string name, department, position;
	int idNumber;

	public : Employee()
	{
		this->idNumber = 0;
		this->name = "";
		this->department = "";
		this->position = "";

	}

	public : Employee(int id, string name, string department, string position)
	{
		this->idNumber = id;
		this->name = name;
		this->department = department;
		this->position = position;
	}

	/**
	 * delegating constructor
	 */
	public : Employee(int id, string name) : Employee(id, name, "", ""){}
	//equivalent to...
	/**
	 * overloaded contructor
	 */
//	Employee(int id, string name)
//	{
//		this->idNumber = id;
//		this->name = name;
//		this->department = "";
//		this->position = "";
//	}

	~Employee()
	{
		cout << "--- Employee is Deleted ---" << endl;
	}

	public:
	string toString()
	{
		return to_string(this->idNumber) +"|"+ this->name +"|"+ this->department +"|"+ this->position;
	}

	public:
	void setId(int);
	void setName(string);
	void setDepartment(string);
	void setPosition(string);
	int getId();
	string getName();
	string getDepartment();
	string getPosition();


};

void Employee :: setId(int id)
{
	this->idNumber = id;
}

void Employee :: setName(string name)
{
	this->name = name;
}

void Employee :: setDepartment(string department)
{
	this->department = department;
}

void Employee :: setPosition(string position)
{
	this->position = position;
}

int Employee :: getId()
{
	return this->idNumber;
}

string Employee :: getName()
{
	return this->name;
}

string Employee :: getDepartment()
{
	return this->department;
}

string Employee :: getPosition()
{
	return this->position;
}


#endif /* LAB4_EMPLOYEE_H_ */
