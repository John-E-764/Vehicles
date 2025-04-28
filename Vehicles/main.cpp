//John E.
//CIS 1202 501
//April 27, 2025

#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

int main() {
	string m;
	int y, d, c;
	cout << "Vehicle manufacturer: ";
	cin >> m;
	cout << "Vehicle year: ";
	cin >> y;
	Vehicle v1(m, y);

	cout << endl;
	cout << "Car manufacturer: ";
	cin >> m;
	cout << "Car year: ";
	cin >> y;
	cout << "Number of doors: ";
	cin >> d;
	Car v2(m, y, d);

	cout << endl;
	cout << "Truck manufacturer: ";
	cin >> m;
	cout << "Truck year: ";
	cin >> y;
	cout << "Towing capacity: ";
	cin >> c;
	Truck v3(m, y, c);

	cout << endl;
	v1.displayInfo();
	cout << endl;
	v2.displayInfo();
	cout << endl;
	v3.displayInfo();
}
