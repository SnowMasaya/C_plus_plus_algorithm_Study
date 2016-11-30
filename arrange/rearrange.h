/*
 * rearrange.h
 *
 *  Created on: Nov 25, 2016
 *      Author: masayaogushi
 */

#include <vector>
#ifndef REARRANGE_H_
#define REARRANGE_H_
using namespace std;

template <typename Type> class rearrange {
public:
	rearrange();
	virtual ~rearrange();
	void rearrange_method(vector<Type>* A_ptr);
};

#endif /* REARRANGE_H_ */
