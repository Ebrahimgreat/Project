#include "patient_visit.h"

using namespace std;
#include <iostream>
#include <string>
using namespace std;

// patient_visit implementations
void patient_visit::setVisitDate(const std::string& visitDate) {
    this->visitDate = visitDate;
    
    
    
}

bool patient_visit::setDocId(DoctorManagement &d, int docId)
{
    if(d.doesExist(docId))
    {
        this->docId=docId;
        return true;
        
    }
    else {
        throw out_of_range("Doctor Does not exist");
        return false;
    }
}
bool patient_visit::setPatId(PatientManagement &p, int patId)
{
    if(p.doesExist(patId))
    {
        this->patId=patId;
        return true;
        
    }
    else{
        throw out_of_range("Patient Does not exist");
        
    }
}




void patient_visit::setVisitReason(const std::string& visitReason) {
    this->visitReason = visitReason;
}

std::string patient_visit::getVisitDate() const {
    return visitDate;
}

int patient_visit::getDoc()
{
    return docId;
}
int patient_visit::getPat(){
    return patId;
}




void patient_visit::addDetails(PatientManagement &p, DoctorManagement &d, int pId, int docId, string reason, string date){
    
    
    
    
    if(setDocId(d, docId)&& setPatId(p, pId)==true)
    {
        setVisitDate(date);
        setVisitReason(reason);
        
        setVisitReason(visitReason);
        
        
        cout<<"Patient Details added successfully"<<endl;
        
        Visit.push_back(*this);
        
        
        
    }
    else{
        throw out_of_range("Patient could not be added");
    }
    
    
}
        
    


void patient_visit::display()
{
    for(int i=0; i<Visit.size(); i++)
    {
        cout<<"Doctor Id: "<<Visit[i].docId<<endl;
        cout<<"Patient Id: "<<Visit[i].patId<<endl;
        cout<<"Visit Date: "<<Visit[i].getVisitDate()<<endl;
        cout<<"Visit Type: "<<Visit[i].getVisitType()<<endl;
        cout<<"Visit Reason: "<<Visit[i].getVisitReason()<<endl;
    }
}



    








std::string patient_visit::getVisitReason() const {
    return visitReason;
}

void patient_visit::setVisitType(char visitType) {
    this->visitType = visitType;
}

char patient_visit::getVisitType() const {
    return visitType;
}






void RoutineCheckup::setHeight(int height) {
    this->height = height;
}

int RoutineCheckup::getHeight()  {
    return height;
}

void RoutineCheckup::setWeight(int weight) {
    this->weight = weight;
}

int RoutineCheckup::getWeight()  {
    return weight;
}

void RoutineCheckup::addPatientDetails(PatientManagement &p, DoctorManagement &d, int pId, int dId, string reason, string date, int height, int weight) {

    setDocId(d, dId);
    setPatId(p, pId);
            
           
            setVisitReason(reason);
            setVisitDate(date);
            
    
            
            setHeight(height);
            
            setWeight(weight);
            Routine.push_back(*this);
            
        
    
}


RoutineCheckup::RoutineCheckup()
{
    setHeight(150);
    setWeight(130);
}
    


void RoutineCheckup:: display()  {
    
    for(int i=0; i<Routine.size(); i++)
    {
        
        // Display specific details for routine checkup
        cout<<"Patient Id "<<Routine[i].getDoc();
        cout<<"Doctor id"<<Routine[i].getPat();
        cout << "Height: " << Routine[i].getHeight() << " cm" << endl;
        cout << "Weight: " << Routine[i].getWeight() << " kg" << endl;
        
    }
}

