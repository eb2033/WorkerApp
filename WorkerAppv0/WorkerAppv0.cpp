// WorkerAppv0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CWorker.h"

int main()
{
    //construct a worker object
    //with a real name and a real work number
    string name;
    int workNum;
    cout << "Enter worker name: ";
    cin >> name;
    cout << "Enter worker number: ";
    cin >> workNum;
    //call the matching constructor function
    //to create the worker object
    CWorker worker(name, workNum);
    //display the content of worker object
    //to the screen
    worker.Display();

    double rate;
    //prompt the user to enter a real rate of pay
    cout << "Enter hrly rate of pay: ";
    cin >> rate;
    //update the object with real rate of pay
    worker.SetHourlyRate(rate);
    //re-Display the worker object
    worker.Display();

    /*
    //prompt the user to enter a real hrs worked
    int hrsWorked;
    cout << "Enter hrs worked: ";
    cin >> hrsWorked;
    //update the object with real rate of pay
    worker.AddHours(hrsWorked);
    //re-Display the worker object
    worker.Display();
    */

    //Add to Object the weekly wage and display it 
    int hours;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter hours worked on ";
        switch (i)
        {
        case 0: cout << "Monday: ";
            break;
        case 1: cout << "Tuesday: ";
            break;
        case 2: cout << "Wednesday: ";
            break;
        case 3: cout << "Thursday: ";
            break;
        case 4: cout << "Friday: ";
            break;
        }//end switch

        cin >> hours;
        worker.AddHours(hours);

    }//end for loop

    worker.Display();

    cout << "Wage due for this week is : "
        << fixed << setprecision(2)
        << worker.GetWage() << endl;



}//end main----------------


