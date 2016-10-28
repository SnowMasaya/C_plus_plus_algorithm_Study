/*
 * iomanip.h
 *
 *  Created on: Oct 28, 2016
 *      Author: masayaogushi
 */

#ifndef IOMANIP_H_
#define IOMANIP_H_
#include <iostream>
#include <vector>

using namespace std;

struct person
{
	string firstname;
	string lastname;
};

vector<person> people;
int field_one_width = 0, field_two_width = 0;

class iomanip {
public:
	iomanip();
	virtual ~iomanip();
};

#endif /* IOMANIP_H_ */
