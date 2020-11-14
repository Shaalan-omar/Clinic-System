//
//  Doctor.cpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#include "Doctor.hpp"

 Doctor::Doctor()
{
    counter = 0;
    ptr = new Appointment [counter];
}

void Doctor::setCounter(int c)
{
    counter = c;
}
int  Doctor::getCounter()
{
    return counter;
}

bool Doctor::availability(Appointment & a , Doctor & dd)
{
    if (dd.getApp() != a.getSlot() )
{
        return false;
    }
    else
        return true;
}

void Doctor::setAppointment(Appointment & aa)
{
    ptr[counter] = aa;
}

int Doctor::getApp()
{
    return ptr[counter].getSlot();
}
