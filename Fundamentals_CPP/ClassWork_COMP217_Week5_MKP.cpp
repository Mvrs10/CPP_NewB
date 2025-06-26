#include "ClassWork_COMP217_Week5_MKP.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> // req. for stream io
#include <memory> // req. for smart pointers
using namespace std;

static int FileIO();
static int BinaryIO();
static int TextFile_ErrorHandlingIO();
static int StreamIO();
static int SmartPointers();
static int SmartPointers_with_memory_leak();
static int SmartPointers_without_memory_leak();
// Basic FileIO
int FileIO() {
    std::string filename = "example_MKP.txt";

    // 1. Write to example_MKP.txt
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Hello, File I/O in CPP! It's me MKP!" << endl;
        outFile << "2nd LINE MKP" << endl;
        outFile << "LAST LINE" << endl;
        outFile.close();
        cout << "Successfully Written to " << filename + "." << endl;
    }
    else {
        std::cerr << "Unable to open file for writing." << endl;
    }
    // 2. Read from example_MKP.txt
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        std::string line;
        cout << "Reading from " << filename << endl;
        while (std::getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
        cout << "Successfully Read from " << filename + "." << endl;
    }
    else {
        cerr << "Unable to open file for reading." << endl;
    }
    // 3. Append to example_MKP.txt
    std::ofstream appendFile(filename, std::ios::app);
    if (appendFile.is_open()) {
        appendFile << "WORLD, File I/O in CPP! It's me MKP!" << endl;
        appendFile << "4nd LINE MKP" << endl;
        appendFile << "5th LINE" << endl;
        appendFile.close();
        cout << "Successfully Appended to " << filename + "." << endl;
    }
    else {
        cerr << "Unable to open file for appending." << endl;
    }
    return 0;
}
// Binary I/O
struct Player {
    int id;
    char name[20];
    char email[40];
    int age;
    int level;
    double currency;
};

int BinaryIO() {
    const char* filename = "NewPlayer.data";
    Player p1 = { 1, "MKP", "mkp@email.com", 20, 100, 1234.56789 }; // Make a player
    // Write player data
    std::ofstream outFile(filename, std::ios::binary);
    if (outFile) {
        outFile.write(reinterpret_cast<char*>(&p1), sizeof(p1));
        outFile.close();
        cout << "Player1 data written to binary file - ID: " << p1.id << endl;
    }
    else {
        std::cerr << "Failed to open B-file for writing." << endl;
    }
    // Read the Player back from the binary file
    Player p2;
    std::ifstream inFile(filename, std::ios::binary);
    if (inFile) {
        inFile.read(reinterpret_cast<char*>(&p2), sizeof(p2));
        inFile.close();
        cout << "Read player info from binary file" << endl;
        cout << "ID: " << p2.id << ", Name: " << p2.name
            << ", Email: " << p2.email << ", Age: " << p2.age
            << ", Level: " << p2.level
            << ", Currency: $" << std::setprecision(2) << std::fixed << p2.currency << endl;
    }
    else {
        cerr << "Failed to open B-file for reading." << endl;
    }
    return 0;
}

// Error Handling
int TextFile_ErrorHandlingIO() {
    // TODO
    std::string filename = "nonexistent_file_MKP.txt";
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: Could not open file '" << filename << "' for reading.\n";
        if (file.fail()) std::cerr << "Reason: Stream failed to open (failbit).\n";
        if (file.bad()) std::cerr << "Reason: I/O error (badbit).\n";
        return 1;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }
    if (file.eof()) {
        std::cout << "End of file reached.\n";
    }
    else if (file.fail()) {
        std::cerr << "Read error occurred.\n";
    }
    file.close();

    return 0;
}

// Stream IO
int StreamIO() {
    // TODO
    std::string name;
    int age;
    double balance;
    // Standard input using cin
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your account balance: ";
    std::cin >> balance;
    // Output using cout
    std::cout << "\n--- User Info ---\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    // Using I/O manipulators
    std::cout << std::fixed << std::setprecision(2); // 2 decimal places
    std::cout << "Balance: $" << balance << "\n";
    // Output to standard error using cerr
    if (age < 0 || balance < 0) {
        std::cerr << "Error: Invalid input values.\n";
    }
    // Logging or diagnostic messages using clog
    std::clog << "Program executed with name: " << name << "\n";
    return 0;
}

// Obj for smartpointer
class MyClass {
public:
    MyClass(int value) : value(value) {
        std::cout << "MyClass(" << value << ") constructed\n";
    }
    ~MyClass() {
        std::cout << "MyClass(" << value << ") destroyed\n";
    }
    void show() {
        std::cout << "Value = " << value << "\n";
    }
private:
    int value;
};
// Smart Pointers
int SmartPointers() {
    // TODO
    cout << "Testing std::unique_ptr" << endl;
    {
        MyClass* pMyClass = new MyClass(5);
        MyClass* pMyClass2 = pMyClass;
        pMyClass->show();
        delete pMyClass;

        std::unique_ptr<MyClass> uPtr = std::make_unique<MyClass>(10);
        uPtr->show();
        //std::unique_ptr<MyClass> uPtr2 = uPtr; // compiler error due to uniqueness
        std::unique_ptr<MyClass> uPtr2 = std::move(uPtr);
        if (!uPtr) {
            cout << "uPtr is nullPtrl after transfer ownership" << endl;
        }
    }
    return 0;
}
class B; // Forward declaration
class A {
public:
    std::shared_ptr< B > ptrB;
    ~A() { std::cout << "A destroyed\n"; }
};
class B {
public:
    std::shared_ptr< A > ptrA; // Creates a cycle
    ~B() { std::cout << "B destroyed\n"; }
};

int SmartPointers_with_memory_leak() {
    // TODO
    std::shared_ptr< A > a = std::make_shared< A >();
    std::shared_ptr< B > b = std::make_shared< B >();
    a->ptrB = b;
    b->ptrA = a; // Cycle created in reference!!!!!!
    cout << "End of scope - OBJECTS ARE NOT DESTROYED - MEMORY LEAK" << endl;
    return 0;
}


class B2; // Forward declaration
class A2 {
public:
    std::shared_ptr< B2 > ptrB2;
    ~A2() { std::cout << "A2 destroyed\n"; }
};
class B2 {
public:
    std::weak_ptr< A2 > ptrA2; // Does not create ref count -> BREAKING THE ENDLESS CYCLE
    ~B2() { std::cout << "B2 destroyed\n"; }
};

int SmartPointers_without_memory_leak() {
    // TODO
    std::shared_ptr< A2 > a2 = std::make_shared< A2 >();
    std::shared_ptr< B2 > b2 = std::make_shared< B2 >();
    a2->ptrB2 = b2;
    b2->ptrA2 = a2; // No cycle now
    cout << "End of scope" << endl;
    return 0;
}

// Pipeline
int ClassWork_COMP217_Week5_MKP() {
    int result;
    //result = FileIO();
    //result = BinaryIO();
    //result = TextFile_ErrorHandlingIO();
    //result = StreamIO();
    //result = SmartPointers();
    //result = SmartPointers_with_memory_leak();
    result = SmartPointers_without_memory_leak();
    return result;
}