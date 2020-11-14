//
//  Queue.cpp
//  Assignment_2_Final
//
//  Created by Omar shaalan on 3/9/20.
//  Copyright © 2020 Omar shaalan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


const int CAPACITY = 1000;


template <typename t>
class Queue
{
    int back;
public:
    t container[CAPACITY];
    Queue();
    bool enqueue(t x)
    {
        if (back >= (CAPACITY - 1))
            return false;
        else
        {
            back++;
            container[back] = x;
            return true;
        }
    };
    t dequeue()
    {
       /* if (back < 0)
            return "";
        else
        {*/
            t x = container[0];
            for (int i = 1; i <= back; i++)
                container[i - 1] = container[i];
            back--;
            return x;
        //}
    };
    bool empty()
    {
        return (back < 0);
    };
    void print()
    {
        for (int i = 0; i <= back; i++)
            cout << container[i] << " ";
        cout << endl;
    };
};
