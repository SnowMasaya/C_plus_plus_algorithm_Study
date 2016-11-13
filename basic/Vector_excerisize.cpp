/*
 * Vector_excerisize.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: masayaogushi
 */

#include "Vector_excerisize.h"
#include "iostream"
using namespace std;

Vector_excerisize::Vector_excerisize(int s) {
	// TODO Auto-generated constructor stub
	try {
	    elem = new double[s];
        sz = s;
	}
	catch (std::length_error) {
		std::cerr << "Length Error" << endl;
	}
	catch(std::bad_alloc) {
		std::cerr << "Bad Alloc" << endl;
	}
}

Vector_excerisize::~Vector_excerisize() {
	// TODO Auto-generated destructor stub
}


double& Vector_excerisize::operator[](int i)
{
	try{
	    return elem[i];
	}
	catch (std::out_of_range) {
		std::cerr << "Vector_excerisize::operator[]:" << endl;
	}
}

int Vector_excerisize::size()
{
	return sz;
}
