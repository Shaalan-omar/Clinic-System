//
//  Patient.hpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <stdio.h>

#endif /* Patient_hpp */
#include "Person.h"
#include "Appointment.h"
#include <iostream>
#include <string>
using namespace std;


class Patient: public Person
{
private:
    dateOfBirth last_Visit;
    string email;
    long int number;
    Appointment A_1;
public:
    Patient();
    Patient(dateOfBirth, string, long int, Appointment);
    void set_LastVIsit(dateOfBirth);
    void setEmail(string);
    void setNumber(long int);
    void setAppointment(Appointment);
    dateOfBirth getDate();
    string getEmail();
    long int getNumber();
    Appointment getAppoint();
    
};
