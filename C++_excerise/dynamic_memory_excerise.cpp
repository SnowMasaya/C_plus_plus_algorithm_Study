/*
 * dynamic_memory_excerise.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#include "dynamic_memory_excerise.h"

dynamic_memory_excerise::dynamic_memory_excerise() {
	// TODO Auto-generated constructor stub

}

dynamic_memory_excerise::~dynamic_memory_excerise() {
	// TODO Auto-generated destructor stub
}

void printArray(int *p_values, int size, int elements_set)
{
	cout << "The total size of the array is: " <<
	     size
	     << endl;
	cout << "Number of slots set so far:: "
		 << elements_set << endl;
	cout << "Values in the array: " << endl;
	for (int i = 0; i < elements_set; ++i)
	{
	    cout << "p_values[" << i << "] = " << p_values[ i ] << endl;
	}
}

int *growArray (int* p_values, int *size)
{
	*size *= 2;
	int *p_new_values = new int[ *size ];
	for (int i = 0; i < *size; i++)
	{
		p_new_values[ i ] = p_values[ i ];
		cout << *size << endl;
		cout << p_values[ i ] << endl;
	}
	delete [] p_values;
	return p_new_values;
}

int tmp3_main(){
	int next_element = 0;
	int size = 3;
	int *p_values = new int[size];
	int val;
	cout << "Please enter number" ;
	cin >> val;

	while ( val > 0)
	{
		if( size == next_element + 1)
		{
			p_values = growArray( p_values, &size );
		}
		p_values[next_element] = val;
		next_element++;
		cout << "Current array values are:" << endl;
		printArray( p_values, size, next_element );
		cout << "Please enter a number (or 0 to exit):";
		cin >> val;
	}
	delete [] p_values;

	return 0;
}
