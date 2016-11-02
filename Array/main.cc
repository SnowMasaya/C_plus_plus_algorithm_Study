/*
 * main.cc
 *
 *  Created on: Oct 31, 2016
 *      Author: masayaogushi
 */

#include<assert.h>
#include<iostream>
#include<vector>
#include "g_vector.h"
#include "g_vector_test.h"
using namespace std;


void StandardExperiment();

int main(int argc, char *argv[]){
    //StandardExperiment();
    gw::GVectorTest tester;
	tester.RunTests();

	return EXIT_SUCCESS;
}

void StandardExperiment() {

	cout << "Now Messing with std implementation." << endl;

	static const int arr[] = {12, 23, 5, 3};
	vector<int> myv (arr, arr + sizeof(arr) / sizeof(arr[0]));

	cout << "Size: " << myv.size() << endl;
	cout << "Capacity: " << myv.capacity() << endl;

	cout << "Adding a few items " << endl;

	myv.push_back(4);
	myv.push_back(12);
	myv.push_back(45);

	cout << "Size: " << myv.size() << endl;
	cout << "Capacity: " << myv.capacity() << endl;
	cout << "Popping 1" << endl;

	myv.pop_back();

	cout << "Size: " << myv.size() << endl;
	cout << "Capacity: " << myv.capacity() << endl;

	cout << "Items:" << endl;
	for (int value : myv) {
		cout << value << endl;
	}

	for (int i = 0; i < 75; i++) {
		myv.push_back(i + 3);
	}

	cout << "Size: " << myv.size() << endl;
	cout << "Capacity: " << myv.capacity() << endl;

	cout << "Collapsing" << endl;
	myv.shrink_to_fit();
	cout << "Capacity: " << myv.capacity() << endl;

	cout << "Items:" << endl;
	for (unsigned long j = 0; j < myv.size(); ++j) {
		cout << j << ": " << myv.at(j) <<endl;
	}

	cout << "Erasing items from indices from 4 to 11" << endl;
	myv.erase(myv.begin() + 4, myv.begin() + 12);

	cout << "Items:" << endl;
	for (unsigned long k = 0; k < myv.size(); ++k) {
		cout << k << ": " << myv.at(k) <<endl;
	}
}
