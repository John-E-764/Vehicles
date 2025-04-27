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
	void setManufacturer(string m) {
		manufacturer = m;
	}
	void setYear(int y) {
		year = y;
	}
	string getManufacturer() const {
		return manufacturer;
	}
	int getYear() const {
		return year;
	}
	void displayInfo() const;
};

#endif
