#include "ClassWork_COMP217_Week5_MKP.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
// Basic FileIO
static int FileIO() {
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

static int BinaryIO() {
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

// Pipeline
int ClassWork_COMP217_Week5_MKP() {
	int result;
    // File IO
    //result = FileIO();
    // Binary IO
    result = BinaryIO();
    // Stream IO
	return result;
}