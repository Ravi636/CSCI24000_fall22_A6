//address.cpp
//`
#include <iostream>
#include <string>
#include "address.h"

Address::Address(){


}	
Address::~Address(){

}
void Address::setAddress1(string address){
	Address::address1 = address;
}
void Address::setAddress2(string address){
	Address::address2 = address;
}
void Address::setCity(string city){
	Address::city = city;

}
void Address::setState(string state){
	Address::state = state;
}
void Address:setZip(string zip){
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
