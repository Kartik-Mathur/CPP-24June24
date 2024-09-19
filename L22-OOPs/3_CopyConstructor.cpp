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

	Car() {
		cout << "Inside Default Constructor\n";
	}

	Car(char*n, int p, int m, int s) {
		cout << "Inside Parameterised Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// 3.COPY CONSTRUCTOR: Ek object se doosra object create krna
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

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

	Car C("BMW", 100, 2021, 4);

	// Calling copy constructor
	Car D = C; // or Car D(C);
	Car E(D);


	A.print();
	B.print();
	C.print();
	D.print();
	E.print();


	return 0;
}
















