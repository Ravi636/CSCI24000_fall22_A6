//date.h
#ifndef Date_H_EXISTS
#define Date_H_EXISTS
#include <stdlib.h>
#include <iostream>
#include <string>

class Date {


	private:
	
		std::string month;
		std::string day;
		std::string year;
		std::string date;
	
	public:
	
		Date();
		~Date();
		void setMonth(std::string m);
		void setDay(std::string d);		
		void setYear(std::string y);
		void setDate(std::string date);
		std::string getMonth();
		std::string getDay();
		std::string getYear();
		std::string getDate();
		
};
#endif

