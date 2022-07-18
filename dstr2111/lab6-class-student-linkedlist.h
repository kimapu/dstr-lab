/*
 * lab6-class-student-linkedlist.h
 *
 *  Created on: Jul 15, 2022
 *      Author: kimlee
 */

#ifndef LAB6_CLASS_STUDENT_LINKEDLIST_H_
#define LAB6_CLASS_STUDENT_LINKEDLIST_H_


# include "lab5-struct-student.h"
# include <iostream>

using namespace std;


class StudentCollection
{
	public:
	Student * head;
	int size;

	StudentCollection()
	{
		cout << "--- Constructing the Student LinkedList object ---" << endl;
		this->size = 0;
		this->head = nullptr;
	}

	public:
	/**
	 * deleteFirst
	 */
	void deleteFirst()
	{
		if( size > 0 )
		{
			Student * toBeDeleted = head; //pointer refers to head which is the 1st node
			head = head->next; //move the head pointer to the 2nd node
			delete toBeDeleted;
			size--;
		}
	}

	/**
	 * deleteLast
	 */
	void deleteLast()
	{
		if( size > 0 )
		{
			if ( size == 1 ) {
				delete head;
				head = nullptr;
			} else {
				Student * beforeLast = head;
				while( beforeLast->next->next != nullptr )
					beforeLast = beforeLast->next;
				delete beforeLast->next;
				beforeLast->next = nullptr;
			}
			size--;
		} //if
	}

	void deleteItemAt( int index )
	{
		if( index < size )
		{
			if( index == 0 )
				deleteFirst();
			else{
				Student * prev = nullptr;
				Student * toDelete = head;
				for( int i = 0; i < index; ++i )
				{
					prev = toDelete;
					toDelete = toDelete->next;
				}
				prev->next = toDelete->next;
				delete toDelete;
				size--;
			}

		}//if
	}

	void remove( int id )
	{
		int index = -1;
		if( size > 0 )
		{
			Student * curr = head;
			while( curr != nullptr)
			{
				++index;
				if( curr->id != id )
					curr = curr->next;
				else
					deleteItemAt(index);
			}
		}//if
	}

	//====================================================================
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


#endif /* LAB6_CLASS_STUDENT_LINKEDLIST_H_ */
