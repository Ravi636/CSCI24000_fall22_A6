// address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <stdlib.h>
#include <string>
#include <iostream>

class Address {
	private:
		std::string address1;
		std::string address2;
		std::string city;
		std::string state;
		std::string zip;
	
	public:
	
		Address();
		~Address();
		
		void setAddress1(std::string address1);
		void setAddress2(std::string address2);
		void setCity(std::string city);
		void setState(std::string state);
		void setZip(std::string zip);	
	
		std::string getAddress1();
		std::string getAddress2();
		std::string getCity();
		std::string getState();
		std::string getZip();
	

			
};
#endif

