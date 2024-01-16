//
//  Patient.cpp
//  project
//
//  Created by Ebrahim Arshad on 1/2/24.
//
#include "Patient.h"
using namespace std;

int Patient::count = 0;

Patient::Patient() : id(count++), doc(nullptr) {}

void Patient::setFname(std::string fName) {
    this->fName = fName;
}

string Patient::getFname() const {
    return fName;
}

void Patient::setLname(string lName) {
    this->lName = lName;

        }
    


std::string Patient::getLname() const {
    return lName;
}

void Patient::setAddress(string address) {
    this->address = address;
}

string Patient::getAddress() const {
    return address;
}

void Patient::setPhone(string phone) {
    this->phone = phone;
}

string Patient::getPhone() const {
    return phone;
}

void Patient::setEmail(string email) {
    this->email = email;
}

string Patient::getEmail() const {
    return email;
}

void Patient::setDoctor(Doctor *doc) {
    this->doc = doc;
}

Doctor *Patient::getDoctor()  {
    return doc;
}


int Patient::getId()  {
    
    return id;
}

int Patient::getCount(){
    return ++count;
}



