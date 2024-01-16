#ifndef doctormanagement_H
#define doctormanagement_H

#include <vector>
#include <string>
using namespace std;
#include "doctor.h"
#include "hospitalafliation.h"
// Include the Doctor class header file

class DoctorManagement {
private:
    std::vector<Doctor> doctors;
    HospitalAffiliation &affliation;

public:
    void addDoctor(string fName, string lName, string phone, string email, string speciality);
    void display();
    bool doesExist(int id);
    bool search(int id);
    void deleteDoctor(int id);
    Doctor* getDoctorById(int id); // To retrieve a doctor by ID
    DoctorManagement(HospitalAffiliation& affil) : affliation(affil) {}
    DoctorManagement();
    
};

#endif // DOCTORMANAGEMENT_H

