/*
 * variable_list.cpp
 *
 *  Created on: Oct 14, 2016
 *      Author: masayaogushi
 */

#include "variable_list.h"
#include <cstdarg>
#include <iostream>

using namespace std;

variable_list::variable_list() {
	// TODO Auto-generated constructor stub

}

variable_list::~variable_list() {
	// TODO Auto-generated destructor stub
}

double variable_list::average(int num, ...){
    va_list arguments;
    double sum = 0;

    va_start (arguments, num);
    for (int x = 0; x < num; x++) {
    	sum += va_arg (arguments, double);
    }
    va_end (arguments);

    return sum / num;
}

int main()
{
	variable_list variable_list_instance;
	cout << variable_list_instance.average(3, 12.2, 22.3, 4.5) << endl;
	cout << variable_list_instance.average(5, 3.3, 2.2, 1.1, 5.5, 3.3) << endl;
}
