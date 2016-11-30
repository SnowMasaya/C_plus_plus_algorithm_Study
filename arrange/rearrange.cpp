/*
 * rearrange.cpp
 *
 *  Created on: Nov 25, 2016
 *      Author: masayaogushi
 */

#include "rearrange.h"
#include <iostream>
#include <iomanip>

template <typename Type> rearrange<Type>::rearrange() {
	// TODO Auto-generated constructor stub

}

template <typename Type> rearrange<Type>::~rearrange() {
	// TODO Auto-generated destructor stub
}

template <typename Type> void rearrange<Type>::rearrange_method(vector<Type> *A_ptr){
	vector<Type>& A = *A_ptr;
	for(size_t i = 1; i < A.size(); ++i){
		if((!( i % 2) && A[i - 1] < A[i]) || ((i % 2) && A[ i - 1] > A[i])){
			swap(A[ i - 1], A[i]);
		}
	}
	for(vector<int>::iterator iter = A.begin(); iter != A.end(); ++iter){
	     cout << *iter << endl;
	}
}

int main(){
	rearrange<int> *rearrange_instance = new rearrange<int>();
	vector<int> test_vector;
	test_vector.push_back(12);
	test_vector.push_back(2);
	test_vector.push_back(1);
	test_vector.push_back(15);
	test_vector.push_back(2);
	test_vector.push_back(4);
	rearrange_instance->rearrange_method(&test_vector);
	return 0;
}
