//main.cpp

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "student.h"
#include "address.h"
#include "date.h"

int main(){
	
	int x = 0;
	int size = 0;
	int type = 0;
	std::string line = "";
	std::string fName;
	std::string lName;
	std::string gpa;
	std::string credit;
	std::string address;
	std::string address2;
	std::string city;
	std::string state;
	std::string zip;
	std::string dob;
	std::string grad;

	std::fstream studentFile;
	std::ofstream shortFile;
	std::ofstream fullFile;
	
	std::stringstream ss("");

	studentFile.open("student.dat");
	shotFile.open("shortFile.txt");
	fullFile.open("fullFile.txt");
	
	if(!studentFile.is_open()){
		std::cout << "students file didn't open" << std::endl;
		return 0;
	}
	if(!shortFile.is_open()){
		std::cout << "short file didn't open" << std::endl;
		return 0;
	}
	if(!fullFile.is_open()){
		std::cout << "full file didn't open" << std::endl;
		return 0;
	}
		
	Student *stu = new Student[50];
	Address *add = new Address[50];
	Date *date = new Dare[50];
	
	
		
	while(getline(studentFile, line)){
		
		ss.clear();
		ss.str("");
		ss.str(line);

		getline(ss, lName, ',');
		getline(ss, fName, ',');
		getline(ss, address, ',');
		getline(ss, address2, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, dob, ',');
		getline(ss, grad, ',');
		getline(ss, gpa, ',');
		getline(ss, credit);
		
		stu[x].setlName(lName);
		stu[x].setfName(fName);
		stu[x].setGpa(gpa);
		stu[x].setCredit(credit);
		
		add[x].setAddress(address);
		add[x].setAddress2(address2);
		add[x].setCity(city);
		add[x].setState(state);
		add[x].setZip(zip);

		stu[x].set_sAddress1(add[x]);
		stu[x].set_sAddress2(add[x]);
		stu[x].set_sCity(add[x]);
		stu[x].set_sState(add[x]);
		stu[x].set_sZip(add[x]);
		stu[x].set_sAddress1(add[x]);
		
		date[x].setDob(dob);
		date[x].setGdate(grad);
		
		stu[x].set_dDob(date[x]);
		stu[x].set_dGrad(date[x]);

		x++;

	}//end while loop
	int done;

	for(int x = 0; x < SIZE; x++){
		stu[x].fullReport(fullFile);
		stu[x].shortReport(shortFile);
		done++;
	}

	if(done > 0){
		std::cout << "Reports are done" << std::endl;
	}


	studentFile.close();
	fullFile.close();
	shortFile.close();
	delete[]stu;
	delete[]add;
	delete[]date;

	return 0;
	
}//end main


