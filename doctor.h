//
//  doctor.h
//  project
//
//  Created by Ebrahim Arshad on 1/2/24.
//

#ifndef doctor_h
#define doctor_h

#include <string>

class Doctor {
private:
    std::string fName, lName, phone, email, speciality;
    static int count;
    int id;

public:
    Doctor();
    void setFname(std::string fName);
    std::string getFname() const;
    void setLname(std::string lName);
    std::string getLname() const;
    void setPhone(std::string phone);
    std::string getPhone() const;
    void setEmail(std::string email);
    std::string getEmail() const;
    void setSpeciality(std::string speciality);
    std::string getSpeciality() const;
    int getId();
    static int getCount();
};

#endif



