/*
 * Vector_excerisize.h
 *
 *  Created on: Nov 8, 2016
 *      Author: masayaogushi
 */

#ifndef VECTOR_EXCERISIZE_H_
#define VECTOR_EXCERISIZE_H_

class Vector_excerisize {
public:
	Vector_excerisize(int s);
	virtual ~Vector_excerisize();
	double& operator[](int i);
	int size();
private:
	double* elem;
	int sz;
};

#endif /* VECTOR_EXCERISIZE_H_ */
