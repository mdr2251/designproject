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

Vehicle::Vehicle() {};
void Vehicle::vehicle(string color) {
    this->color = color;

    float MidSeat = 0;
    float SideSeats = 0;

};
void Vehicle::DisplayVehicle() {
    //int l = 3;

   //for (int i = 0; i < Car.size(); i++)


   //if (l == 3)
   //{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    if (color == "Purple")
    {
        SetConsoleTextAttribute(h, 5);		//purple
        cout << " " << color << " " << Car << endl;
    }

    else if (color == "Green")
    {
        SetConsoleTextAttribute(h, 10);		//Green
        cout << " " << color << " " << Car << endl;
    }

    else if (color == "Black")
    {
        SetConsoleTextAttribute(h, 8);		//Black
        cout << " " << color << " " << Car << endl;
    }

    else if (color == "Red")
    {
        SetConsoleTextAttribute(h, 4);		//Red
        cout << " " << color << " " << Car << endl;
    }

    else if (color == "Blue")
    {
        SetConsoleTextAttribute(h, 9);		//Blue
        cout << " " << color << " " << Car << endl;
    }

    else if (color == "Yellow")
    {
        SetConsoleTextAttribute(h, 6);		//Yellow
        cout << " " << color << " " << Car << endl;
    }

    cout << "***************" << endl;
    cout << " (D) ";			//autofills with D for driver
    for (int i = 0; i < Seats.size(); i++)
    {
        if (i == 0)
        {
            if (Seats.at(0) == 0)
            {
                cout << " (-)" << endl;
            }
            else
            {
                cout << "(5)" << endl;
            }
        }

        else
        {
            if (Seats.at(i) == 0)
            {
                cout << " (-)";
            }
            else
            {
                cout << " (" << Seats.at(i) << ")";
            }
        }
    }
    cout << endl;
    cout << endl;

   };
   
int Vehicle::SetSeat(string) {
    if (seat == "Front Seat")
    {
        isFrontSeat = !false;
        Seats.at(0) = 0;
        return 1;
    }
    else if (seat == "Side Seat")
    {
        if (sideSeats != 0)
        {
            for (int i = 0; i < Seats.size(); i++)
            {
                if (Seats.at(i) == 2 || Seats.at(i) == 3)
                {
                    Seats.at(i) = 0;
                    sideSeats--;
                    return i + 1;
                }
            }
        }
    }
    else if (seat == "Middle Seat")
    {
        if (middleSeats != 0)
        {
            for (int i = 0; i < Seats.size(); i++)
            {
                if (Seats.at(i) == 1)
                {
                    Seats.at(i) = 0;
                    middleSeats--;
                    return i + 1;
                }
            }
        }
    }

};


int Vehicle::GetSideSeat() {
    return sideSeats;
};

float Vehicle::GetMiddleSeat() {
    return middleSeats;
};
int Vehicle::nextSeat(string) {
   

    if (seat == "Middle Seat")
    {
        if (car.GetMiddleSeat() != 0)
        {
            return 1;
        }
    }

    else if (seat == "Side Seat")
    {
        if (car.GetSideSeat() != 0)
        {
            return 1;
        }
    }

    return -1;

};

string Vehicle::GetColor() const {
    return color;

};

string Vehicle::GetCar() const {
    return Car;

};

string Vehicle::GetDescription() const {
    return color + " " + Car;
};

string Vehicle::PrintPassengerInfo() const {
        cout << "First Name: " << firstName << "Last Name: " << lastName << "Credits: " << credits << endl;
};

string Vehicle::getInfo() {
    return Car;
};

string Vehicle::getPassList() {
    return paxName;
};

void Vehicle::PrintAllReservations(vector<Vehicle> listAll) {
    ofstream outFile;
    outFile.open("all_reservations.txt");		//names the file as all_reservations

    for (Vehicle car : listAll)
    {

        outFile << "********************************************" << endl;
        outFile << setw(14) << "<" << car.getInfo() << " info> " << endl << endl;

        vector<string>::iterator iter;
        vector<string> passengerList = car.getPassList();

        for (iter = passengerList.begin(); iter != passengerList.end(); iter++)
        {
            string assignedPassenger = *iter;

            if (assignedPassenger.c_str()[assignedPassenger.size() - 1] == ' ')			//if empty
            {
                outFile << (assignedPassenger + "-") << endl;
            }
            else
            {
                outFile << assignedPassenger << endl; //if someone reserved it
            }
        }

    }

    outFile.close();
    cout << "reservations.txt created" << endl;


};