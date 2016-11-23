/*
 * template_excerise.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#include "template_excerise.h"
#include <iostream>
using namespace std;

template <typename Type> template_excerise<Type>::template_excerise() {
	// TODO Auto-generated constructor stub

}

template <typename Type> template_excerise<Type>::~template_excerise() {
	// TODO Auto-generated destructor stub
}

template <typename Type> Type template_excerise<Type>::multiply(Type x, Type y){
	return x * y;
}

template <typename Type> Type template_excerise<Type>::add(Type x, Type y){
	return x + y;
}

int main(){
	template_excerise<int> e;
	template_excerise<double> d;
	cout << e.add(4, 3) << endl;
	cout << e.multiply(4, 3) << endl;
	cout << d.multiply(4.7, 3.2) << endl;
}
