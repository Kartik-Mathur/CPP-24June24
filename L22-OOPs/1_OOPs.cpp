#include <iostream>
using namespace std;
//////////////// BLUEPRINT //////////////////////////
class Car {
public:
	// All the variables are called as DATA MEMBERS
	char name[100];
	int price;
	int model;
	int seats;

	// MEMBER FUNCTIONS
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}
};
//////////////// BLUEPRINT //////////////////////////


int main() {

	Car A; // A is an Object of class CAR
	// A ke variables ko use krne  ke liye  we use  DOT OPERATOR
	strcpy(A.name, "AUDI");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	A.print();

	Car B;
	strcpy(B.name, "Maruti");
	B.price = 100;
	B.model = 2022;
	B.seats = 7;

	B.print();

	/*
	strcpy(A.name, "AUDI");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	cout << "Name   :" << A.name << endl;
	cout << "Price  :" << A.price << endl;
	cout << "Model  :" << A.model << endl;
	cout << "Seats  :" << A.seats << endl;

	Car B;
	strcpy(B.name, "Maruti");
	B.price = 100;
	B.model = 2022;
	B.seats = 7;

	cout << "Name   :" << B.name << endl;
	cout << "Price  :" << B.price << endl;
	cout << "Model  :" << B.model << endl;
	cout << "Seats  :" << B.seats << endl;
	*/

	return 0;
}
















