#include <iostream>
#include <stdexcept>
#include "ClassWork_COMP217_Week1_MKP.h"
#include "ClassWork_COMP217_Week2_MKP.h"
#include "ClassWork_COMP217_Week3_MKP.h"
#include "ClassWork_COMP217_Week4_MKP.h"
#include "TicTacToe_Pointers_MKP.h"
#include "TicTacToe_Classes_MKP.h"
#include "ClassWork_COMP217_Week5_MKP.h"
using namespace std;
int main()
{
	int result = 0;
	//result = ClassWork_COMP217_Week1_MKP();
	//result = ClassWork_COMP217_Week2_MKP();
	try {
		//result = ClassWork_COMP217_Week3_MKP();
		//result = TicTacToe_Pointers_MKP();
		//result = ClassWork_COMP217_Week4_MKP();
		//result = TicTacToe_Classes_MKP();
		result = ClassWork_COMP217_Week5_MKP();
	}
	catch (const exception& e) {
		result = 1;
		cout << "Error: " << e.what() << endl;
	}
	return result;
}