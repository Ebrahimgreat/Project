#ifndef patient_visit_H
#define patient_visit_H

#include <string>

#include "patientmanagement.h"
#include "doctormanagement.h"
#include <vector>
using namespace std;

class patient_visit {
protected:
    string visitDate;
    string visitReason;
    char visitType;
   
   
    int docId;
    int patId;
    
    vector<patient_visit> Visit;
    
    
    

public:
    void setVisitDate(const std::string& visitDate);
    std::string getVisitDate() const;
    void setVisitReason(const std::string& visitReason);
    std::string getVisitReason() const;
    void setVisitType(char visitType);
    char getVisitType() const;
    
    virtual void addDetails(PatientManagement &p, DoctorManagement &d, int pId, int dId, string reason, string date);
     virtual void display();
    
    
   
    bool doesExist(PatientManagement & p, DoctorManagement &d, int pId, int dId);
    int getDoc();
    int getPat();
    bool setPatId(PatientManagement &d,int docId);
    bool setDocId(DoctorManagement & d, int docId);
    
    
   
  
   
    
};







class RoutineCheckup : public patient_visit {
private:
    int height;
    int weight;
    vector<RoutineCheckup> Routine;
    
    

    

public:
    
    void setHeight(int height);
    int getHeight() ;
    void setWeight(int weight);
    int getWeight() ;
    void show();
     void display() override;
    void addPatientDetails(PatientManagement &p, DoctorManagement &d, int pId, int dId,string reason,string date, int height, int weight) ;
    RoutineCheckup();
   
    
};




#endif // PATIENT_VISIT_H
