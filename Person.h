//
//  Person.hpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

#endif /* Person_hpp */
#include <iostream>
#include <string>
#include "dateOfBirth.h"
using namespace std;

//Some private variables and functions are string in order to RECORD them into a file.



class Person
{
protected:
    string name;
    string ID;
    dateOfBirth date_1;
public:
    Person()
    {
        name = "";
        ID = "";
        date_1.day = "";
        date_1.month="";
        date_1.year="";
    };
    Person (const Person & per)
    {
        date_1 = per.date_1;
        name = per.name;
        ID = per.ID;
        
    };
  
    
   /* person(string n,int id, dateOfBirth date )
    {
        name = n;
        ID = id;
        date_1 = date;
        
    };  */
    void setName(string NAME)
    {
        name = NAME;
    };
    void setID( int x)
    {
        ID = x;
    };
    void  setDay( string x)
    {
        date_1.day = x;
    };
    void  setMonth( string x)
    {
        date_1.month = x;
    };
    void  setYear( string x)
    {
        date_1.year = x;
    };
    string   getName()
    {
        return name;
    };
    string getID()
    {
        return ID;
    };
    string getDay()
    {
        return date_1.day;
    };
    string getMonth()
       {
           return date_1.month;
       };
    string getYear()
       {
           return date_1.year;
       };
    virtual void print()
    {
        cout<<name<<endl;
        cout<<ID<<endl;
        cout<<date_1.day<< '/' << date_1.month << '/' << date_1.year;
        
        
    };
};
