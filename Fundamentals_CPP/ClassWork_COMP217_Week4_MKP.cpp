#include "ClassWork_COMP217_Week4_MKP.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

// Try alternative constructor
class MyRectangle {
	int privateX, privateY, * pi;
public:
	double width, length;
	//Constructors
	MyRectangle(); // empty constructor - is available by default
	MyRectangle(double w, double l);
	MyRectangle(int w, int l);
	double getArea();
	inline double getAreaInline() { return width * length; };
	string ToString();
	~MyRectangle();
};
double MyRectangle::getArea() { return width * length; };
string MyRectangle::ToString() {
	return "W: " + to_string(width) + "- L: " + to_string(length) + "- Area: " + to_string(getArea());
}
// Constructor implementation
MyRectangle::MyRectangle() {
	privateX = 0; privateY = 0;
	width = 0, length = 0;
	pi = new int;
	pi = nullptr;
	pi = NULL;
}
MyRectangle::MyRectangle(double w, double l) {
	width = w, length = l;
	privateX = 0; privateY = 0;
	pi = new int;
}
MyRectangle::MyRectangle(int width, int length) {
	this->width = width, this->length = length;
	privateX = 0; privateY = 0;
	pi = new int;
}
// Destructor implementation
MyRectangle::~MyRectangle() {
	delete pi;
}

int ClassWork_COMP217_Week4_MKP() {
	cout << "Using Classes\n";
	// TODO
	// Using new (deprecated)
	MyRectangle* rectangle1 = new MyRectangle(); //old way
	rectangle1->width = 5;
	rectangle1->length = 12;
	double area1 = rectangle1->getArea();
	cout << "W: " << rectangle1->width << "- L: " << rectangle1->length << "- Area: " << area1 << endl;

	// Using references
	MyRectangle rectangle2;
	rectangle2.width = 4.24;
	rectangle2.length = 15.5;
	double area2 = rectangle2.getArea();
	cout << "W: " << rectangle2.width << "- L: " << rectangle2.length << "- Area: " << area2 << endl;
	cout << rectangle2.ToString() << endl;

	// Using constructor
	MyRectangle rectangle3(2.555555, 6.122421342);
	cout << rectangle3.ToString() << endl;
	cout << "Using Inheritance\n";
	cout << "Using Polymorphism\n";
	return 0;
}
// Base class
class Animal {
public:
	virtual void speak() const {
		cout << "Animal makes a sound." << endl;
	}
	virtual ~Animal() {} // Virtual destructor for proper cleanup
};

// Derived class: Dog
class Dog : public Animal {
public:
	void speak() const override {
		cout << "Dog barks: Woof! Woof!" << endl;
	}
};

// Derived class: Cat
class Cat : public Animal {
public:
	void speak() const override {
		cout << "Cat meows: Meow! Meow!" << endl;
	}
};

// Function demonstrating polymorphism
void makeAnimalSpeak(const Animal& animal) {
	animal.speak();
}

int DemoClasses_Imheritance_Polymorphism() {
	Dog dog;
	Cat cat;

	makeAnimalSpeak(dog);
	makeAnimalSpeak(cat);

	// Using base class pointer
	Animal* animalPtr = new Dog();
	animalPtr->speak();
	delete animalPtr; // Clean up memory

	return 0;
}