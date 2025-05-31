#include "ClassWork_COMP217_Week5_MKP.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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

int ClassWork_COMP217_Week5_MKP() {
	int result;
    result = FileIO();
	return result;
}