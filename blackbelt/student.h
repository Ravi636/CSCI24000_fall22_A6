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
		std::string gpa;
		std::string credit;
		Address sAddress1;
		Address sAddress2;
		Address sCity;
		Address sState;
		Address sZip;
	       	Date dDob;
		Date dGrad;


	public:
		
		Student();
		~Student();
		
		void setfName(std::string fname);
		std::string getfName();
		void setlName(std::string lname);
		std::string getlName();
		void setGpa(std::string gpa);
		std::string getGpa();
		void setCredit(std::string credit);
		std::string getCredit();
	
		void setAddress(Address address);
		Address getAddress();
	
		void setDob(Date dob);
		Date getDob();

		void setGrad(Date grad);
		Date getGrad();
		
		void set_sAddress1(Address address1);
		void set_sAddress2(Address address2);
		void set_sCity(Address city);
		void set_sState(Address state);
		void set_sZip(Address zip);

		Address get_sAddress1();
		Address get_sAddress2();
		Address get_sCity();
		Address get_sState();
		Address get_sZip();

		void set_dDob(Date dob);
		void set_dGrad(Date grad);

		Date get_dDob();
		Date get_dGrad();


		void fullReport(std::ofstream&);

		void shortReport(std::ofstream&);

};
#endif

