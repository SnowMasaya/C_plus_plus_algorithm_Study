/*
 * pointer_to_pointer_excerise.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#include "pointer_to_pointer_excerise.h"

pointer_to_pointer_excerise::pointer_to_pointer_excerise() {
	// TODO Auto-generated constructor stub

}

pointer_to_pointer_excerise::~pointer_to_pointer_excerise() {
	// TODO Auto-generated destructor stub
}

void arangePointer(int ***p_p_arrange)
{
	for (int i = 0; i < 3; i++)
	{
	    for (int j = 0; j < 3; j++)
	    {
	        for (int k = 0; k < 3; k++)
	        {
		        p_p_arrange[ i ][ j ][ k ] = (i + 1) * (j + 1) * (k + 1);
	        }
	    }
	}
}

void printPointer(int ***test_p_p)
{
	for (int i = 0; i < 3; i++)
	{
	    for (int j = 0; j < 3; j++)
	    {
	        for (int k = 0; k < 3; k++)
	        {
       		    cout << test_p_p[ i ][ j ][ k ] << endl;
		        cout << "i:" << i << " j:" << j << " k:" << k << endl;
		        cout << *test_p_p << endl;
		        cout << "i address: " << test_p_p[ i ] << endl;
		        cout << "j address: " << test_p_p[ i ][ j ] << endl;
		        cout << "k address: " << &test_p_p[ i ][ j ][ k ] << endl;
	        }
	    }
	}
}

int tmp4_main(){
	int ***p_p_x;
	p_p_x = new int**[3];

	for (int i = 0; i < 3; i++)
	{
		p_p_x[ i ] = new int*[ 3 ];
	}

	for (int i = 0; i < 3; i++)
	{
	    for (int j = 0; j < 3; j++)
	    {
		    p_p_x[ i ][ j ] = new int[ 3 ];
	    }
	}

	arangePointer(p_p_x);
	printPointer(p_p_x);

	for (int i = 0; i < 3; i++)
	{
		delete [] p_p_x[ i ];
	}

	delete [] p_p_x;

	return 0;
}
