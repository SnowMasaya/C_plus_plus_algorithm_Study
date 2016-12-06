/*
 * merge_sort.h
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_
#define ARRAY_SIZE 7

class merge_sort {
public:
	merge_sort();
	virtual ~merge_sort();
    void merge_method(int *data_array, int left, int right);
};

#endif /* MERGE_SORT_H_ */
