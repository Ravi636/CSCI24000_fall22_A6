//date.h
#ifndef Date_H_EXISTS
#define Date_H_EXISTS
#include <stdlib.h>


class Date {


	private:
		int month;
		int day;
		int year;

	public:
		Date();
		void setMonth(int m);
		void setDay(int d);		
		void setYear(int y);
		int getMonth();
		int getDay();
		int getYear();
};
#endif

