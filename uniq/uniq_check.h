/*
 * uniq_check.h
 *
 *  Created on: Nov 3, 2016
 *      Author: masayaogushi
 */

#ifndef UNIQ_CHECK_H_
#define UNIQ_CHECK_H_
#include<iostream>
using namespace std;

class uniq_check {
public:
	uniq_check();
	string char_code_method(string);
	bool uniq_check_method(string);
	virtual ~uniq_check();
};

#endif /* UNIQ_CHECK_H_ */
