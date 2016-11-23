/*
 * make_binary.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#include "make_binary.h"
#include <iostream>
#include <fstream>
using namespace std;

make_binary::make_binary() {
	// TODO Auto-generated constructor stub
	age = 11;
	score = 200;
	name = "John";
}

make_binary::~make_binary() {
	// TODO Auto-generated destructor stub
}

int tmp4(){
	make_binary* rec = new make_binary();
	fstream a_file("records.bin", ios::trunc | ios::binary |ios::in | ios::out);
	a_file.write(reinterpret_cast<char*>( rec->age ), sizeof( rec->age ));
	a_file.write(reinterpret_cast<char*>( rec->score ), sizeof( rec->score ));
	int len = rec->name.length();
	a_file.write(reinterpret_cast<char*>( &len ), sizeof( len ));
	a_file.write( rec->name.c_str(), len + 1);
	return 0;
}
