/*
 * reverse_test.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: masayaogushi
 */

#include "reverse_test.h"
#include "reverse_practice.h"
#include<iostream>
#include<assert.h>
using namespace std;

reverse_test::reverse_test() {
	// TODO Auto-generated constructor stub

}

reverse_test::~reverse_test() {
	// TODO Auto-generated destructor stub
}

int assertEqual(char *reverse_string, char *answer){
	for(int i = 0; i <= strlen(reverse_string); ++i){
	    if (reverse_string[i] != answer[i]){
            cerr << "Failed" << endl;
         	return EXIT_FAILURE;
	    }
	}
    cout << "Success" << endl;
    return EXIT_SUCCESS;
}

void reverse_test::ReverseTests() const{
	reverse_practice reverse_practice_instance;
	char test_data[5] = "yoga";
	char answer_data[5] = "agoy";
	reverse_practice_instance.reverse_str(test_data);
	char *reverse_string = reverse_practice_instance.reverse_string;
	assertEqual(reverse_string, answer_data);
}
