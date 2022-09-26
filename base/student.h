// student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include <stdlib.h>
#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <string>


class Student {
	
	private:
		std::string fName;
		std::string lName;
		Address address;
		Date date;
		int gpa;
		int credit;

	public:
		Student();
		~Student();
		void setName(std::string name);
		std::string getName();
		void setGpa(int gpa);
		int getGpa();
		void setCredit(int credit);
		int getCredit();


};
#endif

