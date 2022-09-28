// address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <stdlib.h>
#include <string>


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
		void setAddress1(std::address);
		void setCity(std::city);
		void setState(std::state);
		void setZip(std::zip);	
		std::string getAddress1();
		std::string getAddress2();
		std::string getCity();
		std::string getState();
		std::string getZip();

			
};
#endif

