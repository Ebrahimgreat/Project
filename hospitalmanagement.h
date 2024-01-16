#ifndef HOSPITAL_MANAGEMENT_H
#define HOSPITAL_MANAGEMENT_H

#include <vector>
#include <string>
#include "hospital.h"
#include "hospitalafliation.h"
using namespace std;


class hospital_management {
private:
    std::vector<Hospital> h;
    HospitalAffiliation &affliation;
    
    
public:
    void addHospital(string name, string address, string phone);
    void search(int id);
    void display();
    void deleteHospital(int id);
    hospital_management(HospitalAffiliation &affil) : affliation(affil) {}
   
};

#endif // HOSPITAL_MANAGEMENT_H

