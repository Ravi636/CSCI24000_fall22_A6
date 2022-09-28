//address.cpp
//`
#include <iostream>
#include <string>
#include "address.h"

Address::Address(){


}	
Address::~Address(){

}
void setAddress1(string address){
	Address::address1 = address;
}
void setCity(string city){
	Address::city = city;

}
void setState(string state){
	Address::state = state;
}
void setZip(string zip){
	Address::zip = zip;

}	
std::string getAddress1(){
	return address1;

}
std::string getAddress2(){
	return address2;

}
std::string getCity(){
	return city;

}
std::string getState(){
	return state;

}
int getZip(){
	return zip;

}
