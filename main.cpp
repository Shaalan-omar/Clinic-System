//
//  MAIN_final.cpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/12/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
#include "Doctor.hpp"
#include "Patient.hpp"
#include "Appointment.h"
#include "Queue.h"
using namespace std;


int main()
{
    string line, doctorName ,day, month, year;
    int id, timeSlot, no, answer, noOf_doctors, null =0;
    dateOfBirth date; //A variable that arries the date of birth for any PERSON
    Patient p; //a variable of type PATIENT
    Doctor d; // A variable of type DOCTOR
    Appointment a, canceled;
    canceled.setSlot(null);
    string admin, pNAme,dName;
    
       cout<<"How many doctors today?";
       cin >> noOf_doctors;
       
      
    
    ofstream doc_files;
    doc_files.open ("doc_Files.txt");
       
    Doctor *arrOf_doctors = new Doctor [noOf_doctors];
    Queue<Doctor> d1;
for (int i=0; i<noOf_doctors; i++) //For loop to get all the data of the doctors that day
    {
      
    cout<<"What is the name of the doctor\n";
    cin>>doctorName;
    d.setName(doctorName);
    doc_files<<d.getName();
        
    cout<<"Day of birth ?\n";
    cin>>day;
    d.setDay(day);
    doc_files<<d.getDay();
    
    cout<<"Month:\n";
    cin>>month;
    d.setMonth(date.month);
    doc_files<<d.getMonth();
        
    cout<<"Year\n";
    cin>>year;
    d.setYear(date.year);
    doc_files<<d.getYear();
    
    doc_files.close();
     
    
    d1.enqueue(d); // I pushed the the doctor created into the queue.
    
    arrOf_doctors[i] = d; // I have an array of doctors containig all the doctors I have in that day
        
        
        /*
        Queue<Doctor> d1;
        for (int i = 0; i < noOf_doctors; i++)
        {
          
        }
        */
    
    }
    
/*  while ( getline (doc_files,line) )
       {
           int i =0;
           arrOf_doctors[i] = d;
           cout << &line << '\n';
       }
       doc_files.close();
*/
    
    cout<<"Hi admin, I am the system, what's your name?";
    cin>>admin; //The name of the person using the app today
    do     // A do-while loop that at least runs once so if we have one patient
    {
        
        cout<<"What is the task today "<< admin<<" ?" <<endl<< "choose from the menu below:\n"; //Welcome message
        cout<<"MENU"<<endl;
        cout<<"1.An appointment"<<endl;
        cout<<"2.Cancel an appointment";
        cout<<"3.Daily reports for the patients";
        cout<<"4.Daily reports for the Doctors";
        if (answer == 1)
        {
            cout<<"From the keyboard?\n"<<" or form a file "<<admin<< " ?";
            if (answer == 1)
            {
                ofstream patients_file;
                patients_file.open ("New_patients.txt"); //Opening a file for a
                
                cout<<"Name:\n";
                cin>>pNAme;
                p.setName(pNAme);
                patients_file <<p.getName();
                
                cout<<"DD/MM/YYYY\n";
                cin>>date.day>>date.month>>date.year;
                p.setDay(date.day);
                patients_file <<p.getDay();
              
                cout<<"ID:\n";
                cin>>id;
                p.setID(id);
                patients_file << p.getID();
                
                patients_file.close();
                
                cout<<"Which is the appointment prefered by the patient?";
                cin>>timeSlot;
                a.setSlot(timeSlot);
                if (d.availability(a, d))
                {
                     p.setAppointment(a);
                }
                
                else
                {
                    d1.dequeue();
                    d1.enqueue(d);
                    //deqeue the present doctor and enqueue it again so it is present in the last space at the queue and the fairness is achieved.
                };
            }
            else if (answer == 2)
            {
                ifstream old_files;
                old_files.open ("/Users/omarshaalan/Desktop/old_patients.txt");
                
               
                  while ( getline (old_files,line) )
                  {
                      cout << &line << '\n';
                  }
                  old_files.close();
         

              

                
                
            }
        }
        else if (answer == 2)
        {
            p.setAppointment(canceled); // just changing the patient's appointment from the one scheduled to a DEFAULT appointment which is equal to 0
        }
        else if (answer == 3)
        {
            cout<<"Here are the data of the patients for today below:\n";
            ifstream old_files;
            old_files.open ("/Users/omarshaalan/Desktop/old_patients.txt");
            if (old_files.is_open())
            {
              while ( getline (old_files,line) )
              {
                  
                cout << line << '\n';            //A simple code that displays the data                                            of the patients in the file until                                                       the data ends
              }
              old_files.close();
            }

            else cout << "Unable to open file";

        }
        else if(answer == 4)
        {
            for (int i =0; i< noOf_doctors; i++)
            {
                cout<< "Here are the daily reports for the doctors";
                cout << arrOf_doctors[i].getName()<<endl;
                cout<< arrOf_doctors[i].getID()<<endl;
                cout<< arrOf_doctors[i].getDay();
                cout << "/ " << arrOf_doctors[i].getMonth();
                cout <<"/ " <<arrOf_doctors[i].getYear()<<endl;
                cout<<arrOf_doctors[i].getApp();
                cout<<"----------------------------------------";
            }
        }
        else
            cout<<"Invalid number, please try again, enter -1 if you wish to exit the program";
        
        cin>>no;
    }
    while (no != -1);
}

