#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
private: 
	string manufacturer;
	int year;
public:
	Vehicle(string, int);
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	int getYear();
	void displayInfo();
};

#endif
