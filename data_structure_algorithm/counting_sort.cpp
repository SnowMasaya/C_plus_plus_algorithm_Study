/*
 * counting_sort.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: masayaogushi
 */

#include "counting_sort.h"
#define ARRAY_SIZE 7

counting_sort::counting_sort() {
	// TODO Auto-generated constructor stub

}

counting_sort::~counting_sort() {
	// TODO Auto-generated destructor stub
}

void counting_sort::counting_sort_method(int *sort_data){
	int *counting_sort_array = new int[ARRAY_SIZE];

	for(int i = 0; i < ARRAY_SIZE; i++){
		counting_sort_array[i] = 0;
	}

	for(int i = 0; i < ARRAY_SIZE; i++){
		counting_sort_array[sort_data[i]]++;
	}
	int output_index = 0;
	// counting_sort_array is zero not add data
	for(int j=0;j < ARRAY_SIZE; j++){
		while(counting_sort_array[j]--){
			sort_data[output_index++] = j;
		}
	}
}
