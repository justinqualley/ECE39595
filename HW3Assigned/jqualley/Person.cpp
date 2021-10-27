#include <iostream>
#include <string>
#include "Person.h"

Person::Person(const std::string _name, const int _birthMonth, const int _birthDay, const int _birthYear, Address& _address) : address(_address){ 
   name = _name;
   dateOfBirth = std::string(std::to_string(_birthMonth)+"/"+std::to_string(_birthDay)+"/"+std::to_string(_birthYear)); // this should be the only line in the constructor body
   address = _address;
}

std::string Person::getRole( ) { 
   return "unknown";
}

int Person::getZipCode() {
   return address.getZipCode();
}

std::string Person::getDateOfBirth(){
   return dateOfBirth;
}

std::string Person::getName(){
   return name;
}
