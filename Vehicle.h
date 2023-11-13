#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "Database.h"
#include "windows.h"


#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle : public Database {
public:
	int sideSeats;
	int middleSeats;
	int backSeats;
	string seat;
	bool frontAvaliablilty = false;
	bool isFrontSeat = false;

	string color, Car = "Pickup Truck";
	string passenger, paxName = "name";
	vector <int> car;
	vector <int> Seats = { 5 };
	vector <string> teamDrivers = { "Driver: ", "Front Seat: " };

public:
	Vehicle();
	void vehicle(string color);
	void DisplayVehicle();

	int SetSeat(string);
	int GetSideSeat();
	float GetMiddleSeat();
	int nextSeat(string);
	string getInfo();
	string GetColor() const;
	string GetCar() const;
	string GetDescription() const;
	string PrintPassengerInfo() const;
	string getPassList();
	void PrintAllReservations(vector<Vehicle> listAll); 


};

#endif