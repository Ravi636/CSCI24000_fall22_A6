//date.cpp
#include <string>
#include "date.h"
#include <iostream>
#include <sstream>


Date::Date(){
	Date::month = "";
	Date::day = "";
	Date::year = "";
	Date::date = "";

}

Date::~Date(){


}
	
void Date::setMonth(std::string m){
	Date::month = m;

}
void Date::setDay(std::string d){
	Date::day = d;

}	
void Date::setYear(std::string y){
	Date::year = y;

}
void Date::setDate(std::string date){
	
	Date::date = date;
	std::stringstream ss(date);
	getline(ss, Date::month, '/');
	getline(ss, Date::day, '/');
	getline(ss, Date::year,'/');


}
std::string Date::getMonth(){
	return month;

}
std::string Date::getDay(){
	return day;

}
std::string Date::getYear(){
	return year;

}
std::string Date::getDate(){
	return date;
}
