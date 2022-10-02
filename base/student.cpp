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


