//
//  Menu.h
//  project3
//
//  Created by Andrew on 2/14/18.
//  Copyright © 2018 Andrew. All rights reserved.
//
#ifndef Menu_h
#define Menu_h

#include "Event.h"
#include "HashTable.h"
#include <iostream>
#include <string>

using namespace std;

class Menu{
private:
    string title,description;
    int choice, day, hour, minute, year, month;
    Event e;
public:
    Menu();
    ~Menu();
    void menuStart();
    bool choice2();
};

#endif /* Menu_h */
