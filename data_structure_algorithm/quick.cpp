/*
 * quick.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: masayaogushi
 */

#include "quick.h"

quick::quick() {
	// TODO Auto-generated constructor stub

}

quick::~quick() {
	// TODO Auto-generated destructor stub
}

int med3(int x, int y, int z){
	if(x < y){
		if(y < z){
			return y;
		}else {
			if(z < x){
				return x;
			}else{
				return z;
			}
		}
	}else{
		if(z < y){
			return y;
		}else {
			if(x < z){
				return x;
			}else{
				return z;
			}
		}
	}
}

void quick::quick_method(int *data_array, int left, int right){
	if (left < right){
		int i = left;
		int j = right;
		int tmp;
		int piviot = med3(data_array[i], data_array[i + (j - i) / 2], data_array[j]);
		while(1){
			while (data_array[i] < piviot) i++;
			while (piviot < data_array[j]) j--;
			if(i >= j){
				break;
			}
			tmp = data_array[i];
			data_array[i] = data_array[j];
			data_array[j] = tmp;
			i++;
			j--;
		}
		quick_method(data_array, left, i - 1);
		quick_method(data_array, j + 1, right);
	}
}
