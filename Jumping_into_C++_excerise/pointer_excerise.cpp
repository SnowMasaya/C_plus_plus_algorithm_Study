/*
 * pointer_excerise.cpp
 *
 *  Created on: Nov 12, 2016
 *      Author: masayaogushi
 */

#include "pointer_excerise.h"
#include <iostream>
using namespace std;
#define BUFFER 1024

pointer_excerise::pointer_excerise() {
	// TODO Auto-generated constructor stub

}

pointer_excerise::~pointer_excerise() {
	// TODO Auto-generated destructor stub
}

void method_first_last(char* firstname_method, char* lastname_method){
    cout << "-----FUNCTION----" << endl;
    cout << firstname_method << endl;
    cout << lastname_method << endl;
}

void swap_function(char* firstname_method, char* lastname_method){
	char* tmp;
	tmp = new char[BUFFER];
	for(int i = 0; i< sizeof(firstname_method)/2; ++i) {
	    *tmp = *firstname_method;
	    *firstname_method = *lastname_method;
	    *lastname_method = *tmp;
	    firstname_method++;
	    lastname_method++;
	}
}

int tmp2_main(){
	char* firstname;
	char* lastname;
	firstname = new char[BUFFER];
	lastname = new char[BUFFER];
	cin >> firstname;
	cin >> lastname;

	if(firstname == NULL or lastname == NULL){
        return 1;
	}

	method_first_last(firstname, lastname);
	swap_function(firstname, lastname);
    cout << "-----SWAP----" << endl;
    cout << firstname << endl;
    cout << lastname << endl;
	return 0;
}
