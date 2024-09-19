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

	// 1. Default Constructor: Function that gets called when we create an Object
	Car() { // Constructor dont return anything, just used to create objects
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterised Constructor
	Car(char*n, int p, int m, int s) {
		cout << "Inside Parameterised Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Parameterised Constructor-2
	Car(char*n, int p, int m) {
		cout << "Inside Parameterised Constructor-2\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = 4;
	}

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
	Car A;// It will call default constructor
	strcpy(A.name, "AUDI");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	Car B("Maruti", 100, 2022, 7); // It will call parameterised constructor
	// strcpy(B.name, "Maruti");
	// B.price = 100;
	// B.model = 2022;
	// B.seats = 7;

	Car C("BMW", 100, 2021);


	A.print();
	B.print();
	C.print();


	return 0;
}
















