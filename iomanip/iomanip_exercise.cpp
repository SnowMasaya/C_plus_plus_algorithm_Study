/*
 * iomanip.cpp
 *
 *  Created on: Oct 28, 2016
 *      Author: masayaogushi
 */

#include "iomanip_exercise.h"
#include <iomanip>

iomanip::iomanip() {
	// TODO Auto-generated constructor stub

}

iomanip::~iomanip() {
	// TODO Auto-generated destructor stub
}

void get_max_width()
{
	for(iter = people.begin(); iter != people.end(); ++iter)
	{
		if (iter->firstname.length() > field_one_width)
		{
			field_one_width = iter->firstname.length();
		}
		if (iter->lastname.length() > field_two_width)
		{
			field_two_width = iter->lastname.length();
		}
	}
}

void print_element()
{
	for(vector<person>::iterator iter = people.begin(); iter != people.end(); ++iter)
	{
		cout << setw(field_one_width) << left << iter->firstname;
		cout << " ";
		cout << setw(field_two_width) << left << iter->lastname;
	}
}

int main()
{
    field_one_width = 0;
    field_two_width = 0;
    cout << " iomain\n";
    get_max_width();
    print_element();
}
