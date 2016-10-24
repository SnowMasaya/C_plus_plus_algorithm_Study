/*
 * template_practice.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: masayaogushi
 */

#include "template_practice.h"
#include <iostream>
using namespace std;

template <class A_Type> A_Type template_practice<A_Type>::multiply(A_Type x, A_Type y) {
	// TODO Auto-generated destructor stub
	return x * y;
}

template <class A_Type> A_Type template_practice<A_Type>::add(A_Type x, A_Type y){
	return x + y;
}

int main()
{
	template_practice <double> template_practice_class;
	cout << "Add " << template_practice_class.add(10.0, 1.0) << endl;
	cout << "Multiply " << template_practice_class.multiply(10.0, 2.0) << endl;
}
