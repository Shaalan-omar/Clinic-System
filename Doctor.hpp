//
//  Doctor.hpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#ifndef Doctor_hpp
#define Doctor_hpp

#include <stdio.h>

#endif /* Doctor_hpp */
#include "Person.h"
#include "Appointment.h"
using namespace std;

class Doctor: public Person
{
private:
    int counter;
    Appointment *ptr ;
public:
    Doctor();
    void setCounter(int n);
    void setAppointment (Appointment &);
    int getCounter();
    bool availability(Appointment &, Doctor &);
    int getApp();
    void print();
};
