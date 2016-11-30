/*
 * dynamic_excerise.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: masayaogushi
 */

#include "dynamic_excerise.h"
#include <iostream>
#include <random>
#include <array>
#define SIZE 4

template <typename Type> dynamic_excerise<Type>::dynamic_excerise() {
	// TODO Auto-generated constructor stub
}

template <typename Type> dynamic_excerise<Type>::~dynamic_excerise() {
	// TODO Auto-generated destructor stub
}

template <typename Type> void dynamic_excerise<Type>::set_value(){
	for (int i = 0; i <= SIZE; i++)
	{
	    this->weight.push_back( rand() % 3 );
	    this->value.push_back( rand() % 3 );
	}
}

template <typename Type> void dynamic_excerise<Type>::show_value(){
	for (int i = 0; i < SIZE; ++i){
		cout << "weight: " << this->weight[i] << endl;
		cout << "value: " << this->value[i] << endl;
	}
}

template <typename Type> array<Type, LIMIT_SIZE> dynamic_excerise<Type>::dynamic_programming(array<Type, LIMIT_SIZE> dp_value, int total_weight){
	if(total_weight > LIMIT_SIZE){
       	return dp_value;
	}else{
		int large_index = 0;
		int large_value = 0;
		for (int i = 0; i < LIMIT_SIZE; ++i){
			if(large_value < dp_value[i]){
				large_index = i;
				large_value = dp_value[i];
			}
       	}
	    total_weight += this->weight[large_index];
		dp_value[total_weight] += this->value[index] + dp_value[this->weight[large_index]];
       	return this->dynamic_programming(dp_value, total_weight);
	}

	return dp_value;
}

int main(){
	int total_weight = 0;
	dynamic_excerise<int> *dynamic_instance = new dynamic_excerise<int>();
	dynamic_instance->set_value();
    array<int, LIMIT_SIZE> dp_value;
	for (int i = 0; i < LIMIT_SIZE; ++i){
		dp_value[i] = 0;
	}
	for (int i = 0; i < SIZE; ++i){
	    cout << "index: " << i << endl;
	    cout << "weight: " << dynamic_instance->weight[i] << endl;
	    cout << "value: " << dynamic_instance->value[i] << endl;
		dp_value[dynamic_instance->weight[i]] = dynamic_instance->value[i];
		dp_value = dynamic_instance->dynamic_programming(dp_value, total_weight);
	}
	for (int i = 0; i < LIMIT_SIZE; ++i){
		cout << "dp_value: " << dp_value[i] << endl;
	}
	return 0;
}
