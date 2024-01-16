#ifndef hospialafliation_H
#define hospialafliation_H

#include <vector>

#include "doctor.h"
#include "hospital.h"

using namespace std;

class HospitalAffiliation {
private:
    vector<Doctor> affiliatedDoctors;
    vector<Hospital> affiliatedHospitals;

public:
    void addDoctor(Doctor& doctor);


    void addHospital( Hospital& hospital);


    // Display or other methods...
    
    void display();
};

#endif // HOSPITAL_AFFILIATION_H

