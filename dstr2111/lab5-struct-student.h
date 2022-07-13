/*
 * lab5-struct-student.h
 *
 *  Created on: Jul 13, 2022
 *      Author: kimlee
 */

#ifndef LAB5_STRUCT_STUDENT_H_
#define LAB5_STRUCT_STUDENT_H_

# include <iostream>

struct Student {
	int id;
	std::string name;
	int age;
	Student *next;
};

#endif /* LAB5_STRUCT_STUDENT_H_ */
