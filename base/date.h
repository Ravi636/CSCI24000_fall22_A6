//date.h
#ifndef Date_H_EXISTS
#define Date_H_EXISTS
#include <stdlib.h>
#include <iostream>

class Date {


	private:
		int month;
		int day;
		int year;
		std::string date;
	public:
		Date();
		~Date();
		void setMonth(int m);
		void setDay(int d);		
		void setYear(int y);
		void setDate(string date);
		int getMonth();
		int getDay();
		int getYear();
		std::string setDate();
		
};
#endif

