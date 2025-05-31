#include "ClassWork_COMP217_Week3_MKP.h"
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T> T add(T x, T y) {
	return x + y;
}

int ClassWork_COMP217_Week3_MKP() {
	// TODO: Classwork
	// Template
	int isum = add<int>(-5, 12);
	double dsum = add<double>(1.23, -6.88154);
	cout << "Integer Sum: " << isum << " - " << "Double Sum: " << dsum << endl;
	// Array
	array<int, 5> myArray{ 1, 12, 123, 1234, 12345 }; // Class template Array
	cout << "Index" << setw(10) << "Value" << endl;
	for (int i = 0; i < myArray.size(); i++) {
		cout << setw(3) << i << setw(12) << myArray[i] << endl;
	}
	// Vector
	vector<string> names; // Class template Vector
	names.push_back("John");
	names.push_back("Ann");
	names.push_back("MKP");

	cout << "My Contact List" << setw(8) << endl;
	for (string name : names) {
		cout << name << setw(8) << endl;
	}
	// Exception
	double testValue;
	cout << "Enter a negative value: ";
	cin >> testValue;
	if (testValue >= 0)
		throw exception("Invalid value");
	else
		cout << "Your value " << testValue << " is accepted " << endl;
	// Pointers
	int myVariable{ 7 }; // * => pointer operator and & => address operator
	int* myVariablePtr = &myVariable;

	cout << "The address of my variable: " << &myVariable << endl;
	cout << "The value of my pointer: " << myVariablePtr << endl;
	cout << "The address of my pointer: " << &myVariablePtr << endl;
	cout << "The value of my variable: " << myVariable << endl;
	cout << "The value of *myVariablePtr(Value of the address of the pointer): " << *myVariablePtr << endl;

	myVariable = 1234213423421;
	cout << "------------New Value, Same address-------------" << endl;

	cout << "The address of my variable: " << &myVariable << endl;
	cout << "The value of my pointer: " << myVariablePtr << endl;
	cout << "The address of my pointer: " << &myVariablePtr << endl;
	cout << "The value of my variable: " << myVariable << endl;
	cout << "The value of *myVariablePtr(Value of the address of the pointer): " << *myVariablePtr << endl;

	int i = 11;
	int* pi = &i;
	int *pj = &i;
	cout << "Value of pj: " << pj << "Value of i as *pj: " << *pj << endl;

	int a[5] = { 1,2,3,4,5 };
	int* pm;
	pm = a;
	cout << "a[0]: " << a[0] << " *pm: " << *pm << endl;
	pm++;
	cout << "a[1]: " << a[1] << " *pm: " << *pm << endl;
	pm += 2;
	cout << "a[3]: " << a[3] << " *pm: " << *pm << endl;
		return 0;
}