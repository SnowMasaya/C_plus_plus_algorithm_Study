/*
 * counting_sort.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: masayaogushi
 */

#include "counting_sort.h"
#include<vector>
#include<iostream>

using namespace std;

counting_sort::counting_sort() {
	// TODO Auto-generated constructor stub

}

counting_sort::~counting_sort() {
	// TODO Auto-generated destructor stub
}

void counting_sort::counting_sort_method(shared_ptr<vector<int> > sort_data){
	int data_size = sort_data->size();
	cout << data_size << endl;
	vector<int> counting_sort_array(data_size);

	for(int i = 0; i < data_size; i++){
		counting_sort_array.push_back(0);
	}

	for(int i = 0; i < data_size; i++){
		counting_sort_array[sort_data->at(i)]++;
	}
	int output_index = 0;
	// counting_sort_array is zero not add data
	for(int j=0;j < data_size; j++){
		while(counting_sort_array[j]--){
			sort_data->at(output_index++) = j;
		}
	}
}
