/*
 * insert_sort.h
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#ifndef INSERT_SORT_H_
#define INSERT_SORT_H_
#include<vector>

using namespace std;

class insert_sort {
public:
	insert_sort();
	virtual ~insert_sort();
    void insert_method(shared_ptr<vector<int> > data_array);
};

#endif /* INSERT_SORT_H_ */
