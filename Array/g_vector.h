/*
 * g_vector.h
 *
 *  Created on: Oct 31, 2016
 *      Author: masayaogushi
 */

#ifndef G_VECTOR_H_
#define G_VECTOR_H_
#include <iostream>
using namespace std;

namespace gw {

static const int kMinCapacity = 16;
static const int kGrowthFactor = 2;
static const int kShrinkFactor = 4;

class GVector {
public:
	GVector(int capacity);
	//GVector(const GVector &other) = default;
	~GVector();
	int GetSize() const;
	int IsEmpty() const;
	int GetCapacity() const;
	void DebugString() const;
	void Push(int value);
	int GetValueAt(int index) const;
	int Pop();
	void Insert(int index, int value);
	void Prepend(int index);
	void Delete(int index);
	void Remove(int value);
	int Find(int value) const;

private:
	int capacity[kMinCapacity];
	int size;
	std::unique_ptr<int []> data_;
	int DetermineCapacity(int capacity) const;
	void ResizeForSize(int candidate_size);
	void IncreaseSize();
	void DecreaseSize();
};

}

#endif /* G_VECTOR_H_ */
