/*
 * dynamic_excerise.h
 *
 *  Created on: Nov 24, 2016
 *      Author: masayaogushi
 */

#include <vector>
using namespace std;
#ifndef DYNAMIC_EXCERISE_H_
#define DYNAMIC_EXCERISE_H_
#define LIMIT_SIZE 10

template <typename Type> class dynamic_excerise {
public:
	dynamic_excerise();
	virtual ~dynamic_excerise();
	vector<Type> weight;
	vector<Type> value;
	int size;
	void set_value();
	void show_value();
    array<Type, LIMIT_SIZE> dynamic_programming(array<Type, LIMIT_SIZE> dp_value, int total_weight);
};

#endif /* DYNAMIC_EXCERISE_H_ */
