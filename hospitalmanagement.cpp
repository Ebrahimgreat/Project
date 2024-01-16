#include "hospitalmanagement.h"
#include <iostream>
#include <stdexcept>
using namespace std;


    


void hospital_management::addHospital( string name, string address, string phone){
    Hospital h1;
    if (name.empty() || address.empty() || phone.empty()) {
          throw std::invalid_argument("Hospital name, address, and phone cannot be empty");
      }
    
    h1.setName(name);
    h1.setAddress(address);
    h1.setPhone(phone);
    h.push_back(h1);
    affliation.addHospital(h1);
    cout<<"Hospital Added sucessfully";
    

    
}


void hospital_management::search(int id) {
    bool found=false;
    
    for (int i = 0; i < h.size(); i++) {
        if (id==h[i].getId()) {
            cout<<"Hospital Found"<<endl;
            std::cout << "Name: " << h[i].getName() << std::endl;
            std::cout << "Address: " << h[i].getAddress() << std::endl;
            std::cout << "Phone: " << h[i].getPhone() << std::endl;
            found=true;
        }
    }
    if(found==false)
    {
        throw out_of_range("Hospital Not found");
    }
}

void hospital_management::display() {
   
    for (int i=0; i<h.size(); i++)
    {
        int id=h[i].getId();
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<h[i].getName()<<endl;
        cout<<"Address: "<<h[i].getAddress()<<endl;
        cout<<"Phone: "<<h[i].getPhone()<<endl;
        
        
    }
}

void hospital_management::deleteHospital(int id) {
    
    bool found=false;
    for (int i = 0; i < h.size(); i++) {
        if (h[i].getId() == id) {
            h.erase(h.begin() + i);
            found=true;
        }
    }
    if(found==false){
        throw out_of_range("Hospital Not found");
    }
}

