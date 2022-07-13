/*
 * lab5-struct-linkedlist.h
 *
 *  Created on: Jul 13, 2022
 *      Author: kimlee
 */

#ifndef LAB5_STRUCT_STUDENT_LINKEDLIST_H_
#define LAB5_STRUCT_STUDENT_LINKEDLIST_H_


# include "lab5-struct-student.h"
# include <iostream>

using namespace std;


struct StudentLinkedList
{
	Student * head;
	int size;

	StudentLinkedList()
	{
		cout << "--- Constructing the LinkedList object ---" << endl;
		this->size = 0;
		this->head = nullptr;
	}

	/**
	 * REQ2 & REQ4-insert function
	 */
	void insert(int id, string name, int age)
	{
		cout << "LOG: Inserting = " << id  << endl;
		Student * newNode = new Student;
		newNode->id = id;
		newNode->name = name;
		newNode->age = age;
		newNode->next = nullptr;

		if ( head == nullptr ) {
			head = newNode;
		} else {
			Student * last = head;
			while( last->next != nullptr )
				last = last->next;
			last->next = newNode;
		}
		size++;
	}

	/**
	 * REQ3-insert in sorted list function
	 */
	void insertAndSorted(int id)
	{
		insert(id, "", 0);
		sort();
	}

	int getSize()
	{
		return size;
	}

	void show()
	{
		Student * curr = head;
		cout << "\n--- DISPLAY LINKED LIST = " << size << " elements ---" << endl;
		while( curr != nullptr)
		{
			cout << curr->id << " ";
			curr = curr->next;
		}
	}

	/**
	 * sorter
	 */
	void sort()
	{
		Student * curr = head, * index = nullptr;
		int temp;
		if ( head == nullptr ) {
			return;
		} else {
			while( curr != nullptr )
			{
				index = curr->next;
				while( index != nullptr )
				{
					if( curr->id > index->id )
					{
						temp = curr->id;
						curr->id = index->id;
						index->id = temp;
					}
					index = index->next;
				}
				curr = curr->next;
			}
		}
	}


};


#endif /* LAB5_STRUCT_STUDENT_LINKEDLIST_H_ */
