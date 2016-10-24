/*
 * vector.h
 *
 *  Created on: Oct 25, 2016
 *      Author: masayaogushi
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
using namespace std;

template <typename T> class sortedVector{
public:
	void set_value (int length_value, int vec_size_value)
	{
		length = length_value;
		vec_size = vec_size_value;
	}
	T get_value ()
	{
		return *vec_data;
	}
	void insert (T val)
	{
		if (length == vec_size)
		{
			vec_size *= 2;
			vec_data = new T(vec_size);
		}
		++length;
		int pos;
		for (pos = length; pos > 0 && val > vec_data[pos - 1]; --pos)
		{
			vec_data[pos] = vec_data[pos - 1];
		}
		vec_data[pos] = val;
      	cout << "Show Value " << vec_data[pos] << endl;
      	cout << "Show Position " << pos << endl;
	}
private:
	T *vec_data;
	int length;
	int vec_size;
};

#endif /* VECTOR_H_ */
