/*
 * variable_list.h
 *
 *  Created on: Oct 14, 2016
 *      Author: masayaogushi
 */

#ifndef VARIABLE_LIST_H_
#define VARIABLE_LIST_H_

class variable_list {
public:
	variable_list();
	double average(int num, ...);
	virtual ~variable_list();
};

#endif /* VARIABLE_LIST_H_ */
