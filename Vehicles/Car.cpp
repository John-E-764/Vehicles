#include "Car.h"

Car::Car(string m, int y, int d) : Vehicle(m, y) {
	doors = d;
}

void Car::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Number of doors: " << doors << endl;
}
