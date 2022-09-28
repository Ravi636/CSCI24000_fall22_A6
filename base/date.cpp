//date.cpp
#include <string>
#include "date.h"


Date(){


}

~Date(){


}
	
void Date::setMonth(int m){
	Date::month = m

}
void Date::setDay(int d){
	Date::day = d;

}	
void Date::setYear(int y){
	Date::year = y;

}
void Date::setDate(string date){
	Date::date = date;
}
int Date::getMonth(){
	return month;

}
int Date::getDay(){
	return day;

}
int Date::getYear(){
	return year;

}
std::string Date::getDate(){
	return date;
}

