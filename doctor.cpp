#include "doctor.h"

int Doctor::count = 0;

Doctor::Doctor() : id(++count) {}

void Doctor::setFname(std::string fName) {
    this->fName = fName;
}

std::string Doctor::getFname() const {
    return fName;
}

void Doctor::setLname(std::string lName) {
    this->lName = lName;
}

std::string Doctor::getLname() const {
    return lName;
}

void Doctor::setPhone(std::string phone) {
    this->phone = phone;
}

std::string Doctor::getPhone() const {
    return phone;
}

void Doctor::setEmail(std::string email) {
    this->email = email;
}

std::string Doctor::getEmail() const {
    return email;
}

void Doctor::setSpeciality(std::string speciality) {
    this->speciality = speciality;
}

std::string Doctor::getSpeciality() const {
    return speciality;
}

int Doctor::getId()  {
    
    return id;
}

int Doctor::getCount() {
    return ++count;
}
