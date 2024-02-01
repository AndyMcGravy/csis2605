// Programmed by: Andrew McGarvie
// Assignment: Lab #4
// Purpose: Write a program about 
//
#include <iostream>
#include <iomanip>

using namespace std;

// constants for tution and room/board
const double INSTATE_TUITION = 3000.0; // in state tuition
const double OUTOFSTATE_TUITION = 4500.0; // out of state tuition
const double INSTATE_ROOMBOARD = 2500.0; // in state r/b
const double OUTOFSTATE_ROOMBOARD = 3500.0; // out of state r/b

int main()
{
    char residence; // hold in or out of state status
    char roomAndBoard; // hold their room and board requirement

    double totalBill = 0;

    // prompt for residence state
    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state: " << endl;
    // read in their status
    cin.get(residence); // get a charavter from the input buffer/keyboard

    // pull the next char off
    cin.ignore(); // read remove the next \n on the buffer

    // prompt for room and booard
    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not: " << endl;
    //cin.get(roomAndBoard);
    roomAndBoard = cin.get(); // get char from keyboard/buffer

    // we have our input, lets find the tuition
    if ((residence == 'I') || (residence == 'i')) // are they instate (lowercase and uppercase i)
    {
        totalBill = INSTATE_TUITION;

        if ((roomAndBoard == 'Y') || (roomAndBoard == 'y'))
        {
            // add in state r/b
            totalBill += INSTATE_ROOMBOARD; 
        }
    }
    else 
    {
        //residence is not I
        totalBill = OUTOFSTATE_TUITION;
        //cout << "you are out of state" << endl;

        if ((roomAndBoard == 'Y') || (roomAndBoard == 'y'))
        {
            // add in out of state r/b
            totalBill += OUTOFSTATE_ROOMBOARD;
        }
    }

    cout << fixed;
    cout << setprecision(2); //two decimal places
    cout << showpoint; //show decimal
    cout << endl;
    cout << "Your total bill for this semester is $" << totalBill << endl;

    return 0;
}