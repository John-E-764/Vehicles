#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int capacity;
public:
	Truck(string, int, int);
	int getCapacity() const {
		return capacity;
	}
	void setCapacity(int c) {
		capacity = c;
	}
	void displayInfo();
};

#endif
