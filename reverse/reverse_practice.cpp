/*
 * reverse_practice.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: masayaogushi
 */

#include "reverse_practice.h"
#include "reverse_test.h"
#include<iostream>
using namespace std;

reverse_practice::reverse_practice() {
	// TODO Auto-generated constructor stub

}

reverse_practice::~reverse_practice() {
	// TODO Auto-generated destructor stub
}

void reverse_practice::reverse_str(char *str){
	int char_length = strlen(str) - 1;
    for (int i = char_length; i >= 0; --i)
    {
         reverse_string[char_length - i] = str[i];
    }
}

int main(){
	//char input_string[256];
	//cin >> input_string;
	//reverse_practice reverse_practice_instance;
	//reverse_practice_instance.reverse_str(input_string);
    //cout << reverse_practice_instance.reverse_string;
    //cout << endl;
    reverse_test reverse_test_instance;
    reverse_test_instance.ReverseTests();
}
