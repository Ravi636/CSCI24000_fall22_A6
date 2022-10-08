//main.cpp

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "student.h"
#include "address.h"
#include "date.h"


void change(Student *, Student *);


int main(){
	
	int x = 0;
	std::string line = "";
	std::string fName;
	std::string lName;
	std::string gpa;
	std::string credit;
	std::string address1;
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

	studentFile.open("students.dat");
	shortFile.open("shortFile.txt");
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
	Date *date = new Date[50];
	
	
	std::cout << "work";	
	while(getline(studentFile, line)){
		
		ss.clear();
		ss.str("");
		ss.str(line);

		getline(ss, lName, ',');
		getline(ss, fName, ',');
		getline(ss, address1, ',');
		getline(ss, address2, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, dob, ',');
		getline(ss, grad, ',');
		getline(ss, gpa, ',');
		getline(ss, credit, ',');
		
		stu[x].setlName(lName);
		stu[x].setfName(fName);
		stu[x].setGpa(gpa);
		stu[x].setCredit(credit);
		
		add[x].setAddress1(address1);
		add[x].setAddress2(address2);
		add[x].setCity(city);
		add[x].setState(state);
		add[x].setZip(zip);

		stu[x].set_sAddress1(add[x]);
		stu[x].set_sAddress2(add[x]);
		stu[x].set_sCity(add[x]);
		stu[x].set_sState(add[x]);
		stu[x].set_sZip(add[x]);
	
		
		date[x].setDate(dob);
		date[x].setDate(grad);
		
		stu[x].set_dDob(date[x]);
		stu[x].set_dGrad(date[x]);

		x++;

	}//end while loop
	int done = 0;
	int report = 0;
	while(done == 0){
		std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< std::endl;
		std::cout << "How would you like to see the students report!" << std::endl;
		std::cout << "Enter 1: full report" << std::endl;
		std::cout << "Enter 2: short report" << std::endl;
		std::cout << "Enter 3: alphabatized by Last Name report" << std::endl;
		std::cout << "Enter 4: alphabatized by First Name report" << std::endl;
		std::cout << "Enter 5: sorted by highest GPA report" << std::endl;
		std::cout << "Enter 6: alphabatized by State report" << std::endl;
		std::cout << "Enter 7: sorted by highest DOB by year report" << std::endl;
		std::cout << "Enter 8: search students by their first name" << std::endl;
		std::cout << "Enter 9: search students by their Gpa" << std::endl;
		std::cout << "Enter 0: End sim " << std::endl;
		
		std::cin >> report;
		if (report == 1){
		}
		else if (report == 2){
			for(int x = 0; x < 50; x++){
				stu[x].shortReport(shortFile);
			}
		}
		else if (report == 3){
			for(int x = 0; x < 49; x++){
				for(int cur = 0; cur < 49; cur++){
					if(stu[cur].getlName().compare(stu[cur+1].getlName()) > 0){
						change(stu + cur , stu + cur + 1);
					}
				}
			}
		
		}
		else if (report == 4){
			for(int x = 0; x < 49; x++){
				for(int cur = 0; cur < 49; cur++){
					if(stu[cur].getfName().compare(stu[cur+1].getfName()) > 0){
						change(stu + cur, stu + cur + 1);
					}
				}
			}
		
		}
		else if (report == 5){
			for(int x = 0; x < 49; x++){
				for(int cur = 0; cur < 49; cur++){
					if(stu[cur].getGpa().compare(stu[cur+1].getGpa()) > 0){
						change(stu + cur, stu + cur + 1);
					}
				}
			}
		
		}
		else if (report == 6){
			for(int x = 0; x < 49; x++){
				for(int cur = 0; cur < 49; cur++){
					if(stu[cur].get_sState().getState().compare(stu[cur+1].get_sState().getState()) > 0){
						change(stu + cur, stu + cur + 1);
					}
				}
			}
		
		}
		else if (report == 7){
			for(int x = 0; x < 49; x++){
				for(int cur = 0; cur < 49; cur++){
					if(stu[cur].get_dDob().getYear().compare(stu[cur+1].get_dDob().getYear()) > 0){
						change(stu + cur, stu + cur + 1);
					}
				}
			}
		
		}
		else if (report == 8){
			std::string text = "";
			std::cout << "Enter student's first name you want to search:";
			std::cin >> text;
			for(int x = 0; x < 50; x++){
				if(stu[x].getfName().compare(text) == 0){

					std::cout << "Last Name: " << stu[x].getlName() << std::endl
					<< "First Name: " << stu[x].getfName() << std::endl
					<<"Address: " << stu[x].get_sAddress1().getAddress1() << std::endl 
					<< "Address2: " << stu[x].get_sAddress2().getAddress2() << std::endl 
					<< "City: "<< stu[x].get_sCity().getCity() << std::endl
					<< "State: " << stu[x].get_sState().getState() << std::endl
					<< "Zip: "<< stu[x].get_sZip().getZip() << std::endl
					<< "Date of Birth: " << stu[x].get_dDob().getDate() << std::endl 
					<< "Graduation Date: " << stu[x].get_dGrad().getDate() << std::endl
					<<"GPA: "<<stu[x].getGpa() << std::endl
					<<"Credit Hours: "<<stu[x].getCredit() << std::endl
					<< "________________________" << std::endl;

				}
			}
		}
		else if (report == 9){
			std::string text = "";
			std::cout << "Enter student's Gpa you want to search:";
			std::cin >> text;
			for(int x = 0; x < 50; x++){
				if(stu[x].getGpa().compare(text) == 0){

					std::cout << "Last Name: " << stu[x].getlName() << std::endl
					<< "First Name: " << stu[x].getfName() << std::endl
					<<"Address: " << stu[x].get_sAddress1().getAddress1() << std::endl 
					<< "Address2: " << stu[x].get_sAddress2().getAddress2() << std::endl 
					<< "City: "<< stu[x].get_sCity().getCity() << std::endl
					<< "State: " << stu[x].get_sState().getState() << std::endl
					<< "Zip: "<< stu[x].get_sZip().getZip() << std::endl
					<< "Date of Birth: " << stu[x].get_dDob().getDate() << std::endl 
					<< "Graduation Date: " << stu[x].get_dGrad().getDate() << std::endl
					<<"GPA: "<<stu[x].getGpa() << std::endl
					<<"Credit Hours: "<<stu[x].getCredit() << std::endl
					<< "________________________" << std::endl;

				}
			}
		}

		else if (report == 0){
			done++;
		}

		for(int y = 0; y < 50; y++){
			stu[y].fullReport(fullFile);
		}

		if(done > 0){
			std::cout << "Reports are done" << std::endl;
		}
	}

	studentFile.close();
	fullFile.close();
	shortFile.close();
	
	delete[]stu;
	delete[]add;
	delete[]date;

	return 0;
	
}//end main
void change (Student *a, Student *b){
	Student c;
	c = *a;
	*a = *b;
	*b = c;
}


