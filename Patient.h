//
//  Patient.h
//  project
//
//  Created by Ebrahim Arshad on 1/2/24.
//

#ifndef Patient_H
#define Patient_H

#include <string>
using namespace std;
#include "doctor.h"

class Patient {
private:
    std::string fName, lName, address, phone, email;
    int id;
    static int count;
    Doctor * doc;
   

public:
    Patient();
    void setFname(string fName);
    string getFname() const;
    void setLname(string lName);
    string getLname() const;
    void setAddress(string address);
    string getAddress() const;
    void setPhone(std::string phone);
    string getPhone() const;
    void setEmail(std::string email);
    string getEmail() const;
    void setDoctor(Doctor *doc);
    Doctor *getDoctor();
    static int getCount();
   
    int getId() ;
    
};

#endif // PATIENT_H
