/*
 * merge_sort.h
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_
#include<vector>
using namespace std;

class merge_sort {
public:
	merge_sort();
	virtual ~merge_sort();
    void merge_method(shared_ptr<vector<int> > data_array, int left, int right);
};

#endif /* MERGE_SORT_H_ */
