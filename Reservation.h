#pragma once
#include <iostream>
#include <cstring>
#include "Database.h"
#include "Vehicle.h"
#include "Passenger.h"
#include "windows.h"

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation : public Database {

private:
	vector <string> res;
	int front = 5;
	int backCompact = 3;
	int backEndSedan = 2;
	int backMidSedan = 1;
	string seatType = "";

	int reservationNum = 0;


protected:
	float resNum = -1;
	float reservationNumber;
	string reservedSeat;

public:
	Reservation();
	void SetRes(int num, string name);
	string GetResName(int num);
	void SetReservedSeat(string type);
	string GetReservedSeat() const;
	void SetReservationNumber(int num);
	int GetReservationNumber() const;
	void CreateReservation();
	void ModifyReservation();
	void DeleteReservation();
	void DisplayReservation(vector<Vehicle>& currentTotal);
	

};

#endif
