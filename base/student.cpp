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
std::string Student::getName(){
	return fName;

}
void Student::setlName(std::string name){
	Student::lName = name;
}
void Student::setGpa(int gpa){
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
	Student::sAddress1 = address1
}
void Student::set_sAddress2(Address address2){
	Student::sAddress2 = address2
}
void Student::set_sCity(Address city){
	Student::sCity = city;
}
void set_sState(Address state){
	Student::sState = state;
}
void set_sZip(Address zip){
	Student::sZip = zip;
}

Student::Address get_sAddress1(){
	return sAddress1;
}
Student::Address get_sAddress2(){
	return sAddress2;
}
Student::Address get_sCity(){
	return sCity;
}
Student::Address get_sState(){
	return sState;
}
Student::Address get_sZip(){
	return sZip;
}

void Student::set_dDob(Date dob){
	Student::dDob = dob;
}
void Student::set_dGrad(Date grad){
	Student::dGrad = grad;
}

Student::Date get_dDob(){
	return dDob;
}
Student::Date get_dGrad(){
	return dGrad;
}

void Student::fullReport(ofstream full){

}
void Student::shortReport(ofsteam s){

}
