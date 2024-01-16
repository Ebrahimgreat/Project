#include <iostream>
#include<vector>
#include <stdexcept>

using namespace std;
#include "patientmanagement.h"
#include "Patient.h"
#include "doctormanagement.h"
#include "hospitalmanagement.h"

#include "hospitalafliation.h"
#include "doctor.h"
#include "patient_visit.h"
#include "hospital.h"
//throw in exception handling
//exception handling
//try
//catch
//throw
//exception
int main()
{
    
    HospitalAffiliation hp;
    patient_visit pv;
    PatientManagement p;
    DoctorManagement d(hp);
    hospital_management h(hp);
    RoutineCheckup rc;
    

    
    
    
    
    
    try{
        p.addPatient("Esmail", "Shahid", "Purdue Lahore", "03008666700", "esmailshahid@gmail.com");
        p.addPatient("Ebrahim","Shahid","117C Defence Lahore", "03338663210","ebrahimgreat@gmaill.com");
        p.addPatient("Eessa", "Arshad", "Lahore", "03077772929", "eessashahid@gmail.com");
       
                
        
    }
        
        catch(const out_of_range &e){
            cerr<<"Out of range error: "<<e.what()<<endl;
        }
        
        
        try{
            d.addDoctor("Esmail", "Arshad" ,"03008666700", "esmailshahid@gmail.com", "Surgeon");
            d.addDoctor("Ali", "Mohammad", "03237682103", "alimohammad@gmail.com", "EyeDoctor");
            
            p.assignDoctor(1, 1, &d);
            p.display();
            
            
            
        }
        catch(const out_of_range &e){
            cerr<<"Out of range error: "<<e.what()<<endl;
        }
        
        
        
        
        try{
            h.addHospital("Shifa", "1172323", "0300343433");
            h.addHospital("", "23232", "2232323");
        }
        catch(invalid_argument &e)
        {
            cerr<<"Invalid argument: "<<e.what()<<endl;
        }
        try{
            h.search(2);
        }
        
        catch(const out_of_range &e){
            cerr<<"Out of range error: "<<e.what()<<endl;
        }
        
        try{
            
            pv.addDetails(p,d,1,1, "sick", "25th June");
            pv.display();
            
            
            rc.addPatientDetails(p, d, 1, 2, "Sick", "Boo", 175, 68);
            rc.display();
        }
        catch(const out_of_range &e)
        {
            cerr<<"Out of range "<<e.what()<<endl;
        }
    
    hp.display();
    
    }

    
    
    
    
    
    
    
    

    
    
   
   
    

  
    
   
    
  
   
    
   
    

