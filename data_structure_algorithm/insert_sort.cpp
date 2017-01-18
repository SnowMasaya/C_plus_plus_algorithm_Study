/*
 * insert_sort.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#include "insert_sort.h"
#include<iostream>
using namespace std;
#define ARRAY_SIZE 7

insert_sort::insert_sort() {
	// TODO Auto-generated constructor stub

}

insert_sort::~insert_sort() {
	// TODO Auto-generated destructor stub
}

void insert_sort::insert_method(shared_ptr<vector<int> > data_array){
	int j;
	for(int i = 0; i < data_array->size(); ++i){
	    auto tmp = data_array->at(i);
	    for(j = i; j > 0 && data_array->at(j - 1) > tmp; j--){
	    	data_array->at(j) = data_array->at(j - 1);
	    }
	    data_array->at(j) = tmp;
	}
}
