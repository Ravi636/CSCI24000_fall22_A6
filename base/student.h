// student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include <stdlib.h>
#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <string>
#include <fstream>

class Student {
	
	private:
		std::string fName;
		std::string lName;
		Address address;
		Date dob;
		Date grad;
		int gpa;
		int credit;

	public:
		Student();
		~Student();
		void setfName(std::string fname);
		std::string getfName();
		void setlName(std::string lname);
		std::string getlName();
		void setGpa(int gpa);
		int getGpa();
		void setCredit(int credit);
		int getCredit();
	
		void setAddress(Address address);
		Address getAddress();
	
		void setDob(Date dob);
		Date geDob();

		void setGrad(Date grad);
		Date getGrad();

};
#endif

