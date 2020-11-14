//
//  Patient.cpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//
#include "Patient.hpp"

Patient::Patient()
{
    
}
Patient::Patient(dateOfBirth d, string mail, long int phone, Appointment x)
{
    last_Visit.day = d.day;
    last_Visit.month = d.month;
    last_Visit.year = d.year;
    number = phone;
    int y = A_1.getSlot();
    x.setSlot(y);
}
void Patient::set_LastVIsit(dateOfBirth d)
{
    last_Visit.day = d.day;
    last_Visit.month = d.month;
    last_Visit.year = d.year;
}
void Patient::setAppointment(Appointment f)
{
    A_1.setSlot(f.getSlot());
}
void Patient::setEmail(string m)
{
    email = m;
}
void Patient::setNumber(long int n)
{
    number = n;
}
dateOfBirth Patient::getDate()
{
    return last_Visit;
}
string Patient::getEmail()
{
    return email;
}
long int Patient::getNumber()
{
    return number;
}
Appointment Patient::getAppoint()
{
    return A_1;
}
