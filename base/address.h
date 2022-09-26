// address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <stdlib.h>

class Address {
	        private:
			std::string address1;
			std::string address2;
			std::string city;
			std::string state;
			int zip_code;
	
		public:
	
			Address();		
		   	void setAddress1(std::address);
			void setCity(std::city);
			void setState(std::state);
			void setZip(int zip);	
			std::string getAddress1();
			std::string getAddress2();
			std::string getCity();
			std::string getState();
			int getZip();

			
};
#endif

