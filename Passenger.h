#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "Database.h"
#include "Vehicle.h"
#include "windows.h"

using namespace std;

#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger : public Database {
private:
	string firstName = "Null";
	string lastName = "Null";
	float credits = 0;


public:
	Passenger();
	int getCredits() const;
	void setCredits(float number);
	string GetFirstName() const;
	void SetFirstName(string fn);
	string GetLastName() const;
	void SetLastName(string ln);


};

#endif