/*
 * enum_excerise.cpp
 *
 *  Created on: Nov 11, 2016
 *      Author: masayaogushi
 */

#include "enum_excerise.h"
#include <iostream>

using namespace std;

enum_excerise::enum_excerise() {
	// TODO Auto-generated constructor stub

}

enum_excerise::~enum_excerise() {
	// TODO Auto-generated destructor stub
}

void takestruct(int& ref)
{
	cout << ref << endl;
}

int tmp_main(){

	//Enum
	enum TicTacSquare {TTTS_BLANK, TTTS_O, TTTS_X};
	int judge = 1;
	if (judge == TTTS_O){
        cout << "Match" << endl;
	}

	//Pointer
	int x = 5;
	int* p_pointer_to_interger = &x;

	cout << *p_pointer_to_interger << endl;

	int *p_int = NULL;

	if( p_int != NULL){
        *p_int = 2;
	}

	// Reference is have to initialize and don't reinitialize and store value again
	int x2 = 5;

	takestruct(x2);

	return 0;
}
