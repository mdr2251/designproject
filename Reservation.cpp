#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cstring>
#include "Database.h"
#include "Vehicle.h"
#include "Passenger.h"
#include "Reservation.h"
#include "windows.h"

using namespace std;

Reservation::Reservation() {};
void Reservation::SetRes(int num, string name) {
	name = res[num];
};
string Reservation::GetResName(int num) {
	if (res.at(num).size() == 0)
	{
		return " Value Unassigned";
	}
	else
	{
		return res.at(num);                        // assign reservation numbers to reservation number
	}

	return " Value Unassigned";
};
void Reservation::SetReservedSeat(string type) {
	reservedSeat = type;
};
string Reservation::GetReservedSeat() const {
	return reservedSeat;
};
void Reservation::SetReservationNumber(int num) {
	reservationNumber = num;
};
int Reservation::GetReservationNumber() const {
	return reservationNumber;
};
void Reservation::CreateReservation() {
    string yourName;
    cout << "Enter your name:" << endl;  // user enters name
    cin >> yourName;

    if (yourName == firstName + lastName)
    {
        cout << "You have " << credits << "credits";     // prints credits if name exists 
    }
    else
    {
        cout << "Your name is not in the database.";  //returns user to menu if name doesn't exist
        // !!call main menu function in main!! //
    }

    if (credits <= 0)
    {
        cout << "You have no more seat credits and need to find your own ride.";
        // !!call main menu function in main!! //
    }
    else
    {
        // !! call display vehicles function !! // 
        // function to choose seat?

    }
    // reservation number system

};
void Reservation::ModifyReservation() {
    //int reservationNum = 0;


    int p = 0;
    cin >> reservationNumber;

    if (seatType == "Front")    // chosen from case statement
    {



        if ((reservationNumber >= 01) && (reservationNumber <= 24))
        {
            credits = credits + front;
        }
        else
        {
            //return to main menu
            cout << "Sorry that reservation doesn't exist";
        }
        // return to create function to redo process, call from main
    }

    if (seatType == "Back Compact")    // chosen from case statement
    {



        if ((reservationNumber >= 01) && (reservationNumber <= 24))
        {
            credits = credits + backCompact;
        }
        else
        {
            //return to main menu
            cout << "Sorry that reservation doesn't exist";
        }
        // return to create function to redo process, call from main
    }

    if (seatType == "Back End Sedan")    // chosen from case statement
    {



        if ((reservationNumber >= 01) && (reservationNumber <= 24))
        {
            credits = credits + backEndSedan;
        }
        else
        {
            //return to main menu
            cout << "Sorry that reservation doesn't exist";
        }
        // return to create function to redo process, call from main
    }

    if (seatType == "Back Mid Sedan")    // chosen from case statement
    {


        if ((reservationNumber >= 01) && (reservationNumber <= 24))
        {
            credits = credits + backMidSedan;
        }
        else
        {
            //return to main menu
            cout << "Sorry that reservation doesn't exist";
        }

        // return to create function to redo process, call from main

    }

};
void Reservation::DeleteReservation() {
    //int reservationNum = 0;
    cin >> reservationNum;

    if ((reservationNum >= 01) && (reservationNum <= 24))
    {
    }
};
void Reservation::DisplayReservation(vector<Vehicle>& currentTotal) {
    vector<Vehicle>::iterator iter;

    for (iter = currentTotal.begin(); iter != currentTotal.end(); iter++)
    {
        iter->DisplayVehicle();
    }

};
