//address.cpp
//`
#include <iostream>
#include <string>
#include "address.h"

Address::Address(){
	
	Address::address1 = "";
	Address::address2 = "";
	Address::city = "";
	Address::state = "";
	Address::zip = "";
	

}	
Address::~Address(){

}

void Address::setAddress1(std::string address1){
	Address::address1 = address1;
}
void Address::setAddress2(std::string address2){
	Address::address2 = address2;
}
void Address::setCity(std::string city){
	Address::city = city;

}
void Address::setState(std::string state){
	Address::state = state;
}
void Address::setZip(std::string zip){
	Address::zip = zip;

}	

std::string Address::getAddress1(){
	return address1;

}
std::string Address::getAddress2(){
	return address2;

}
std::string Address::getCity(){
	return city;

}
std::string Address::getState(){
	return state;

}
std::string Address::getZip(){
	return zip;
}

