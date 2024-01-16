#include "doctormanagement.h"
#include <iostream>
#include <stdexcept>
using namespace std;
#include <string>
//remove std::cout and std::cin and use cout and cin instead





void DoctorManagement::addDoctor(string fName, string lName, string phone, string email, string speciality) {
   
    Doctor doc1;
    if (fName.empty() || phone.empty() || lName.empty()|| email.empty() || speciality.empty()){
          throw std::invalid_argument("Patient name, address, and phone cannot be empty");
      }
    


    doc1.setEmail(email);
    doc1.setFname(fName);
    doc1.setLname(lName);
    doc1.setSpeciality(speciality);
    doctors.push_back(doc1);
    cout << "Record added successfully with a doctor." << endl;
    affliation.addDoctor(doc1);
    
    
}

bool DoctorManagement::doesExist(int id)
{
    for(int i=0; i<doctors.size(); i++)
    {
        if(id==doctors[i].getId())
        {
            return true;
        }
    }
    return false;
}

void DoctorManagement::display() {
    
    for ( int i=0; i<doctors.size(); i++) {
        int id=doctors[i].getId();
        cout<<"Doctor id: "<<id;
       
        cout<<"First Name: "<<doctors[i].getFname()<<endl;
        cout<<"Last Name: "<<doctors[i].getLname()<<endl;
        cout<<"Speciality: "<<doctors[i].getSpeciality()<<endl;
        // Display doctor details
    }
}

bool DoctorManagement::search(int id) {
    
    if(doesExist(id))
    {
        cout<<"Doctor found";
        cout<<id;
        
    }
    throw out_of_range("Doctor out of Range");
    return false;
}

void DoctorManagement::deleteDoctor(int id ) {
    bool found=false;
    for (auto it = doctors.begin(); it != doctors.end(); ++it) {
        if (it->getId() == id) {
            doctors.erase(it);
            cout << "Doctor deleted successfully." << std::endl;
            return;
        }
    }
    if(found==false)
    {
        throw out_of_range("Doctor Not found");
    }
}

Doctor* DoctorManagement::getDoctorById(int id) {
    for (auto& doctor : doctors) {
        if (doctor.getId() == id) {
            return &doctor;
        }
    }
    return nullptr;
}

