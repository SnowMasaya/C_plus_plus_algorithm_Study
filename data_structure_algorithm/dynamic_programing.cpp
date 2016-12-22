/*
 * dynamic_programing.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: masayaogushi
 *      Longest Increasing Subsequence
 *          http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/
 */

#include "dynamic_programing.h"

dynamic_programing::dynamic_programing() {
	// TODO Auto-generated constructor stub

}

dynamic_programing::~dynamic_programing() {
	// TODO Auto-generated destructor stub
}

int dynamic_programing::_lis(int arr[], int n, int *max_list_length){
	if(n == 1){
		return 1;
	}

	int current_lis_length = 1;
	for(int i = 0; i < n -1; i++){
		int subproblem_lis_length = _lis(arr, i, max_list_length);

		if(arr[i] < arr[n-1] && current_lis_length < (1 + subproblem_lis_length)){
			current_lis_length = 1 + subproblem_lis_length;
		}
	}

	if(*max_list_length < current_lis_length){
		*max_list_length = current_lis_length;
	}

	return current_lis_length;
}

int dynamic_programing::lis(int arr[], int n){
	int max_ls_length = 1;
	_lis(arr, n, &max_ls_length);
	return max_ls_length;
}

int dynamic_programing::lis_bottom_up(int arr[], int n){
	int i, j, max = 0;
	int *lis = new int[n]();

	for(i = 0; i < n; i++){
		lis[i] = 1;
	}

	for(int i = 1; i < n; i++){
	    for(int j = 0; j < i; j++){
	    	if( arr[i] > arr[j] && lis[i] < lis[j] + 1){
	    		lis[i] = lis[j] + 1;
	    	}
	    }
	}

	for(int i = 0; i < n; i++){
		if(max < lis[i]){
			max = lis[i];
		}
	}

	delete lis;

	return max;
}
