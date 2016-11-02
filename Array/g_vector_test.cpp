/*
 * gvector_test.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: masayaogushi
 */

#include "g_vector_test.h"
#include <iostream>

namespace gw {

void GVectorTest::RunTests() const {
	TestSize();
	// TestCapacity();
	// TestIsEmpty();
	// TestGetValueAt();
	// TestPop();
	// TestInsert();
	// TestPrepend();
	// TestDelete();
	// TestRemove();
	// TestFind();
};

void GVectorTest::TestSize() const {
	gw::GVector tester(3);
	assert(tester.GetSize() == 0);

	int items_to_add = 5;
	for (int i =0; i < items_to_add; ++i) {
		tester.Push(i + 1);
	}
	assert(tester.GetSize() == items_to_add);
}

}
