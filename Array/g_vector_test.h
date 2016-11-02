/*
 * gvector_test.h
 *
 *  Created on: Nov 2, 2016
 *      Author: masayaogushi
 */

#ifndef GVECTOR_TEST_H_
#define GVECTOR_TEST_H_
#include "g_vector.h"
#include <assert.h>

namespace gw {

class GVectorTest {
public:
	void RunTests() const;
	void TestSize() const;
	void TestCapacity() const;
	void TestIsEmpty() const;
	void TestGetValueAt() const;
	void TestPop() const;
	void TestInsert() const;
	void TestPrepend() const;
	void TestDelete() const;
	void TestRemove() const;
	void TestFind() const;
};

}
#endif /* GVECTOR_TEST_H_ */
