#include "Vehicle.h"

Vehicle::Vehicle(string m, int y) {
	manufacturer = m;
	year = y;
}

void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}
