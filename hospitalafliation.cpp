#include "hospitalafliation.h"
#include <iostream>
using namespace std;
#include <string>
//create auto loop



void HospitalAffiliation:: addDoctor( Doctor& doctor) {
    affiliatedDoctors.push_back(doctor);
}


void HospitalAffiliation:: addHospital( Hospital& hospital) {
    affiliatedHospitals.push_back(hospital);
}


//create auto loop
void HospitalAffiliation::display() {
    cout << "Affiliated Doctors:" << endl;
    int id;
    for ( auto &doctor : affiliatedDoctors) {
        id=doctor.getId();
        
        cout << "Doctor ID: " << id << endl;
    }

    cout << "Affiliated Hospitals:" << endl;
    for ( auto &hospital : affiliatedHospitals) {
        cout << "Hospital ID: " << hospital.getId() << endl;
    }
}
