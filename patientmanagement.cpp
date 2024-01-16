#include "patientmanagement.h"
#include "doctormanagement.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Patient PatientManagement::addPatient( string fName, string lName, string address, string phone, string email) {
    if (fName.empty() || address.empty() || phone.empty() || lName.empty()|| email.empty()){
          throw std::invalid_argument("Patient name, address, and phone cannot be empty");
      }
    
    Patient p;
   
    

    p.setEmail(email);
    p.setFname(fName);
    p.setLname(lName);
    p.setPhone(phone);
    p.setAddress(address);
    p.setDoctor(nullptr);
    
    // Ensure you have a method to handle this in the Patient class
    patients.push_back(p);
   
    std::cout << "Record added successfully. Patient has been added successfully " << std::endl;
  
    
    
    return p;
}

bool PatientManagement::doesExist(int id)
{
    for(int i=0; i<patients.size(); i++)
    {
        if(id==patients[i].getId())
        {
            return true;
        }
    }
    return false;
}


bool PatientManagement::search(int id) {

    
    if(doesExist(id))
    {
    
            cout<<"Patient Found !"<<endl;
        cout<<"Patient Id: "<<id;
            
            
            
            return true;
        
    }
    
        throw out_of_range("Patient Not found");
    
}

void PatientManagement::display() {
  
    
    for (int i=0; i<patients.size(); i++) {
        
        
        cout<<"Patient id :"<<patients[i].getId()<<endl;
        cout<<"Patient Name: "<<patients[i].getEmail()<<endl;
        cout<<"Patient Last Name: "<<patients[i].getLname()<<endl;
        cout<<"Patient Address: "<<patients[i].getAddress()<<endl;
       
        
        if(patients[i].getDoctor()!=nullptr)
        {
            cout<<"Doctor id: "<<patients[i].getDoctor()->getId()<<endl;
        
        }
        else
        {
            cout<<"No doctor assigned yet";
            cout<<endl;
        }
        
    }
}

void PatientManagement::deletePatient() {
    int id;
    cout << "Enter id: ";
    cin >> id;
    for (auto it = patients.begin(); it != patients.end(); ++it) {
        if (it->getId() == id) {
            patients.erase(it);
            cout << "Patient deleted successfully." << std::endl;
            return;
        }
    }
}

void PatientManagement::assignDoctor(int patientId, int doctorId, DoctorManagement *dm) {
    
    bool found=false;
        for(int i=0; i<patients.size(); i++ )
        {
            
            if(patientId==patients[i].getId())
            {
                if(dm->doesExist(doctorId))
                {
                    Doctor *doc;
                    doc=dm->getDoctorById(doctorId);
                
                    
                    patients[i].setDoctor(doc);
                    cout<<"Patient assigned successfuly";
                    found=true;
                }
                
                
            }
            
            
        }
        
            if(found==false)
            {
                throw out_of_range("Doctor Not found");
            }
        
    }

PatientManagement:: PatientManagement()
{
    
}
    


