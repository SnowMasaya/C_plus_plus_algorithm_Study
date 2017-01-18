/*
 * counting_sort.h
 *
 *  Created on: Dec 8, 2016
 *      Author: masayaogushi
 */

#ifndef COUNTING_SORT_H_
#define COUNTING_SORT_H_
#include<vector>

using namespace std;

class counting_sort {
public:
	counting_sort();
	virtual ~counting_sort();
    void counting_sort_method(shared_ptr<vector<int> > sort_data);
};

#endif /* COUNTING_SORT_H_ */
