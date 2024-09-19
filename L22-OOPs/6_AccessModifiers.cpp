#include <iostream>
using namespace std;
//////////////// BLUEPRINT //////////////////////////
class Car {
private:
	int price;

public:
	char name[100];
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
	// Setter of price
	void setPrice(int p) {
		if (p > 100 && p < 200)
			price = p;
		else price = 150;
	}
	// getter of price
	int getPrice() {
		return price;
	}
};
//////////////// BLUEPRINT //////////////////////////



int main() {
	Car A;

	strcpy(A.name, "AUDI");
	// A.price = -100;
	A.setPrice(-100);
	A.model = 2020;
	A.seats = 4;

	char name[] = "Maruti";
	Car B(name, 100, 2022, 7);
	char name1[] = "BMW";
	Car C(name1, 100, 2021, 4);

	Car D = C;

	A.print();
	B.print();
	C.print();
	D.print();



	return 0;
}
















