#ifndef patientmanagement_H
#define patientmanagement_H

#include <vector>
#include "Patient.h" 
#include "doctormanagement.h"
// Include the Patient class header file

class PatientManagement {
private:
    std::vector<Patient> patients;
    
    

public:
    Patient addPatient(string fname,string lname,string address, string phone, string email);
    bool search(int id);
    void display();
    void deletePatient();
    int id;
    PatientManagement();
    bool doesExist(int id);
    
    void assignDoctor(int patientId, int doctorId, DoctorManagement *dm);
     
};

#endif // PATIENTMANAGEMENT_H

