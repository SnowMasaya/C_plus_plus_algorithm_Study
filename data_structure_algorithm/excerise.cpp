/*
 * excerise.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#include "excerise.h"
#include "merge_sort.h"
#include "insert_sort.h"
#define ARRAY_SIZE 7
#include <iostream>
using namespace std;

excerise::excerise() {
	// TODO Auto-generated constructor stub

}

excerise::~excerise() {
	// TODO Auto-generated destructor stub
}

void show_array(int *sort_data){
	for(int i = 0; i < ARRAY_SIZE; ++i ){
		cout << sort_data[i] << endl;
	}
}

int main(){
	int array_data[ARRAY_SIZE] = {0, 3, 2, 4, 5, 1, 9};
	merge_sort *merge_sort_instance = new merge_sort();
	merge_sort_instance->merge_method(array_data, 0, ARRAY_SIZE);
	show_array(array_data);
	insert_sort *insert_sort_instance = new insert_sort();
	insert_sort_instance->insert_method(array_data);
	show_array(array_data);
	return 0;
}
