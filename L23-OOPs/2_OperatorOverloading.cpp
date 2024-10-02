#include <iostream>
using namespace std;
//////////////// BLUEPRINT //////////////////////////
class Car {
private:
	int price;
public:
	char *name;
	int model;
	int seats;
	const int tyres;
	static int count;

	Car(): tyres(4), name(NULL) {
		cout << "Inside Default Constructor\n";
		// name = NULL;
		count++;
	}

	Car(char*n, int p, int m, int s): tyres(4) {
		cout << "Inside Parameterised Constructor\n";
		// constructor mei name pehle se present ho hi nhi skta, no need to free the previous
		// memory of name
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
		count++;
	}

	Car(Car &X): tyres(4) {
		cout << "Inside Copy Constructor\n";
		// constructor mei name pehle se present ho hi nhi skta, no need to free the previous
		// memory of name
		// This will make a deep copy
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name; // This will create shallow copy
		price = X.price;
		model = X.model;
		seats = X.seats;
		count++;
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

	void setName(char*n) {
		if (name) delete[]name;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	// A > B
	bool operator>(Car &X) {
		return price > X.price;
	}

	// A < B
	bool operator<(Car &X) {
		return price < X.price;
	}
};
//////////////// BLUEPRINT //////////////////////////


// To give value to static buckets we can do
int Car::count = 0;
// Global Scope
// :: Scope resolution operator


int main() {
	Car A;

	// strcpy(A.name, "AUDI");  // We cannot add "AUDI" to name, because name is NULL
	A.setName("AUDI");
	// A.price = -100;
	A.setPrice(-100);
	A.model = 2020;
	A.seats = 4;

	char name[] = "Maruti";
	Car B(name, 100, 2022, 7);
	char name1[] = "BMW";
	Car C(name1, 100, 2021, 4);

	C.setName("ROLLS");

	Car D = C;
	Car E = C;

	E.name[0] = 'L';

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();

	if (A < B) {
		cout << "A is smaller\n";
	}
	else {
		cout << "B is smaller\n";
	}

	cout << "Total Cars: " << Car::count << endl;
	cout << "Total Cars: " << A.count << endl;



	return 0;
}
















