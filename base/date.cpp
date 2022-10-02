//date.cpp
#include <string>
#include "date.h"
#include <iostream>

Date::Date(){


}

Date::~Date(){


}
	
void Date::setMonth(string m){
	Date::month = m

}
void Date::setDay(string d){
	Date::day = d;

}	
void Date::setYear(string y){
	Date::year = y;

}
void Date::setDate(string date){
	Date::date = date;
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
