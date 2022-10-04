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
		void setMonth(string m);
		void setDay(string d);		
		void setYear(string y);
		void setDate(string date);
		std::string getMonth();
		std::string getDay();
		std::string getYear();
		std::string setDate();
		
};
#endif

