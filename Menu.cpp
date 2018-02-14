//
//  Menu.cpp
//  project3
//
//  Created by Andrew on 2/14/18.
//  Copyright © 2018 Andrew. All rights reserved.
//
#include "Menu.h"
Menu::Menu()
{
}
Menu::~Menu()
{
}
void Menu::menuStart()
{
    
    MONTH userMONTH = (MONTH)month;
    cout << "***Welcome!***" << endl;
    cout << "1.Create\n2.Quit" << endl;
    cout << "Enter a choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Title for the event: "; cin >> title;
        e.editTitle(title);
        cout << "Description: "; cin >> description;
        e.editDescript(description);
        cout << "day   : "; cin >> day;
        cout << "hour  : "; cin >> hour;
        cout << "minute: "; cin >> minute;
        cout << "year  : "; cin >> year;
        cout << "month : "; cin >> month;
        e.editDate(day,userMONTH,year,hour,minute);
        e.displayEvent();
    }
    else if(choice == 2)
    {
        cout << "Good Bye" << endl;
        exit(0);
    }
    else
    {
        cout << "error!" << endl;
    }
}
bool Menu::choice2()
{
    MONTH userMONTH = (MONTH)month;
    cout << "1.Edit\n2.Display\n3.Quit" << endl;
    cout << "Enter a number: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "give a title for the event: "; cin >> title;
        e.editTitle(title);
        cout << "Description: "; cin >> description;
        e.editDescript(description);
        cout << "day   : "; cin >> day;
        cout << "hour  : "; cin >> hour;
        cout << "minute: "; cin >> minute;
        cout << "year  : "; cin >> year;
        cout << "month : "; cin >> month;
        e.editDate(day,userMONTH,year,hour,minute);
        e.displayEvent();
        return false;
    }
    else if(choice == 2)
    {
        e.displayEvent();
        return false;
    }
    else if(choice == 3)
    {
        cout << "Good Bye" << endl;
        return true;
    }
    else
    {
        cout << "error!" << endl;
        return false;
    }
}
