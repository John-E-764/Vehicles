#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
	int doors;
public:
	Car(string, int, int);
	int getDoors() const {
		return doors;
	}
	void setDoors(int d) {
		doors = d;
	}
	void displayInfo() const;
};

#endif
