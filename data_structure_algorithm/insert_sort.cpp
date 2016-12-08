/*
 * insert_sort.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#include "insert_sort.h"
#define ARRAY_SIZE 7

insert_sort::insert_sort() {
	// TODO Auto-generated constructor stub

}

insert_sort::~insert_sort() {
	// TODO Auto-generated destructor stub
}

void insert_sort::insert_method(int *data_array){
	int tmp;
	int j;
	for(int i = 1; i < ARRAY_SIZE; i++){
		tmp = data_array[i];
		for(j = i; j > 0 && data_array[j - 1] > tmp; j--){
			data_array[j] = data_array[j - 1];
		}
	    data_array[j] = tmp;
	}
}
