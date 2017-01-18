/*
 * quick.h
 *
 *  Created on: Dec 8, 2016
 *      Author: masayaogushi
 */

#ifndef QUICK_H_
#define QUICK_H_
#include<vector>

using namespace std;

// Quick.
// Example:

class quick {
public:
	quick();
	virtual ~quick();
    void quick_method(vector<int> data_array, int left, int right);
};

#endif /* QUICK_H_ */
