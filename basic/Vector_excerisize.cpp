/*
 * Vector_excerisize.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: masayaogushi
 */

#include "Vector_excerisize.h"

Vector_excerisize::Vector_excerisize(int s) {
	// TODO Auto-generated constructor stub
	elem = new double[s];
    sz = s;
}

Vector_excerisize::~Vector_excerisize() {
	// TODO Auto-generated destructor stub
}


double& Vector_excerisize::operator[](int i)
{
	return elem[i];
}

int Vector_excerisize::size()
{
	return sz;
}
