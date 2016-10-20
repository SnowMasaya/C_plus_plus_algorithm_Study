/*
 * recurse.cpp
 *
 *  Created on: Oct 14, 2016
 *      Author: masayaogushi
 */

#include "recurse.h"
#include <iostream>

using namespace std;

recurse::recurse() {
	// TODO Auto-generated constructor stub

}

recurse::~recurse() {
	// TODO Auto-generated destructor stub
}

void recurse::doll(int size) {
	// TODO Auto-generated constructor stub
    cout << size << "\n";
	if (size == 0)
    	return;
    doll(size - 1);
}

int main(){
    recurse recurse_instance;
    recurse_instance.doll(9);
}
