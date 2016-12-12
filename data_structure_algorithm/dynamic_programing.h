/*
 * dynamic_programing.h
 *
 *  Created on: Dec 12, 2016
 *      Author: masayaogushi
 */

#ifndef DYNAMIC_PROGRAMING_H_
#define DYNAMIC_PROGRAMING_H_

class dynamic_programing {
public:
	dynamic_programing();
	virtual ~dynamic_programing();
    int _lis(int arr[], int n, int *max_list_length);
    int lis(int arr[], int n);
    int lis_bottom_up(int arr[], int n);
};

#endif /* DYNAMIC_PROGRAMING_H_ */
