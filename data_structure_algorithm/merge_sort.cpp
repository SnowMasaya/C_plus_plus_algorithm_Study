/*
 * merge_sort.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#include "merge_sort.h"
#define ENDNUMBER 100000000
#include <iostream>
using namespace std;

merge_sort::merge_sort() {
	// TODO Auto-generated constructor stub

}

merge_sort::~merge_sort() {
	// TODO Auto-generated destructor stub
}

void Merge(int *data_array, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int *L = new int[n1];
	int *R = new int[n2];
	for(int i = 0; i < n1; i++){
		L[i] = data_array[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = data_array[mid + i];
	}
	L[n1] = ENDNUMBER;
	R[n1] = ENDNUMBER;
	int i = 0;
	int j = 0;
	for(int k = left; k < right - 1 ; k++){
		if(L[i] < R[j]){
			data_array[k] = L[i];
			i = i + 1;
		}else{
			data_array[k] = R[j];
			j = j + 1;
		}
	}
}

void merge_sort::merge_method(int *data_array, int left, int right){
	int mid = (left + right) / 2;
	if(left + 1 < right){
		merge_method(data_array, left, mid);
		merge_method(data_array, mid, right);
		Merge(data_array, left, mid , right);
	}
}
