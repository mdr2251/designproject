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

Passenger::Passenger() {
	firstName = "Null";
	lastName = "Null";
	credits = 0;
};



int Passenger::getCredits() const {
	return credits;
};

void Passenger::setCredits(float number) {
	credits = number;
};
string Passenger::GetFirstName() const {
	return firstName;
};

void Passenger::SetFirstName(string fn) {
	this->firstName = fn;
};

string Passenger::GetLastName() const {
	return lastName;
};

void Passenger::SetLastName(string ln) {
	this->lastName = ln;
};