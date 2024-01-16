#include "hospital.h"

int Hospital::count = 0;

Hospital::Hospital():
id(++count){
}

void Hospital::setName(const std::string& name) {
    this->name = name;
}

std::string Hospital::getName() const {
    return name;
}

void Hospital::setAddress(const std::string& address) {
    this->address = address;
}

std::string Hospital::getAddress() const {
    return address;
}

void Hospital::setPhone(const std::string& phone) {
    this->phone = phone;
}

std::string Hospital::getPhone() const {
    return phone;
}

int Hospital::getCount() {
    return count;
}

int Hospital::getId()  {
    
    return id;
}
