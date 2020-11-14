//
//  Appointment.hpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#ifndef Appointment_hpp
#define Appointment_hpp

#include <stdio.h>

#endif /* Appointment_hpp */
#include <iostream>
using namespace std;

class Appointment
{
protected:
  int timeSlot;
public:
   Appointment()
    {
        timeSlot = 0;
    };
    
    int getSlot()
    {
        return timeSlot;
    };
    
    void setSlot(int f)
    {
        timeSlot = f;
    };
    
    bool operator > (const Appointment & x)
    {
        if(timeSlot > x.timeSlot)
            return true;
        else
            return false;
    };
    
    bool operator < (const Appointment & x)
    {
        if(timeSlot < x.timeSlot)
        {
            return true;
        }
        else
            return false;
    };
    
    bool operator == (Appointment & x)
    {
        if(timeSlot == x.timeSlot)
        {
            return true;
        }
        else
            return false;
    };
};

