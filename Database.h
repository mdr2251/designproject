#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include "windows.h"

using namespace std;

#ifndef DATABASE_H
#define DATABASE_H

class Database {
protected:
	string firstName;
	string lastName;
	float credits;

public:
	Database();
	void SetFirstName(string);
	string GetFirstName();
	void SetLastName(string);
	string GetLastName();
	float GetCredits();
	void SetCredits(float);

};

#endif

