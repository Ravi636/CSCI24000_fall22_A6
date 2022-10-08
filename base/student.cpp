// student.cpp

#include "student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


Student::Student(){
	Student::fName = "";
	Student::lName = "";
	Student::gpa = "";
	Student::credit = "";

}
	
Student::~Student(){
	

}
void Student::setfName(std::string name){
	 Student::fName = name;

}
std::string Student::getfName(){
	return fName;

}
void Student::setlName(std::string name){
	Student::lName = name;
}
std::string Student::getlName(){
	return lName;
}
void Student::setGpa(std::string gpa){
	Student::gpa = gpa;

}
std::string Student::getGpa(){
	return gpa;

}
void Student::setCredit(std::string credit){
	Student::credit = credit;

}
std::string Student::getCredit(){
	return credit;

}
void Student::set_sAddress1(Address address1){
	Student::sAddress1 = address1;
}
void Student::set_sAddress2(Address address2){
	Student::sAddress2 = address2;
}
void Student::set_sCity(Address city){
	Student::sCity = city;
}
void Student::set_sState(Address state){
	Student::sState = state;
}
void Student::set_sZip(Address zip){
	Student::sZip = zip;
}

Address Student::get_sAddress1(){
	return sAddress1;
}
Address Student::get_sAddress2(){
	return sAddress2;
}
Address Student::get_sCity(){
	return sCity;
}
Address Student::get_sState(){
	return sState;
}
Address Student::get_sZip(){
	return sZip;
}

void Student::set_dDob(Date dob){
	Student::dDob = dob;
}
void Student::set_dGrad(Date grad){
	Student::dGrad = grad;
}

Date Student::get_dDob(){
	return dDob;
}
Date Student::get_dGrad(){
	return dGrad;
}

void Student::fullReport(std::ofstream& full){

	full << "*************************" << std::endl
	<< "Name: " << getlName() << ", " << getfName() << std::endl
	<<"Address: " << get_sAddress1().getAddress1()<< ", " << get_sAddress2().getAddress2() << ", " << get_sCity().getCity() 
	<<", " << get_sState().getState() << ", "<< get_sZip().getZip() << std::endl
	<< "Date of Birth: " << get_dDob().getDate() << std::endl 
	<< "Graduation Date: " << get_dGrad().getDate() << std::endl
	<<"GPA: "<<getGpa() << std::endl
	<<"Credit Hours Completed: "<<getCredit() << std::endl
	<< "________________________" << std::endl;

}

void Student::shortReport(std::ofstream& s){

	s << "Last Name: " << getlName() << ", First Name: " << getfName() << std::endl << "_________________________"<<std::endl;

}



