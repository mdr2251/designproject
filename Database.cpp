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

Database::Database() {
	credits = 0;
};

void Database::SetFirstName(string fn) {
	this->firstName = fn;
};

string Database::GetFirstName() {
	return firstName;
};

void Database::SetLastName(string ln) {
	this->lastName = ln;
};

string Database::GetLastName() {
	return lastName;
};

float Database::GetCredits() {
	return credits;
};

void Database::SetCredits(float number) {
	credits = number;
};
