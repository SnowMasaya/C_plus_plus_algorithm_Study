/*
 * linear_search.cpp
 *
 *  Created on: Jan 17, 2017
 *      Author: masayaogushi
 */

#include "linear_search.h"

linear_search::linear_search() {
	// TODO Auto-generated constructor stub

}

linear_search::~linear_search() {
	// TODO Auto-generated destructor stub
}

int search(int arr[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;
}
