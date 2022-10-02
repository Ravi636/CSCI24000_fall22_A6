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
		std::string gpa;
		std::string credit;

	public:
		Student();
		~Student();
		void setfName(string fname);
		std::string getfName();
		void setlName(string lname);
		std::string getlName();
		void setGpa(string gpa);
		std::string getGpa();
		void setCredit(string credit);
		std::string getCredit();
	
		void setAddress(Address address);
		Address getAddress();
	
		void setDob(Date dob);
		Date getDob();

		void setGrad(Date grad);
		Date getGrad();
		
		void fullReport(ofstream&);

		void shortReport(ofstream&);

};
#endif

