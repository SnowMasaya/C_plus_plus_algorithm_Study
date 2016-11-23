/*
 * class_excerise.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#include "class_excerise.h"
#include <stddef.h>

class_excerise::class_excerise() {
	// TODO Auto-generated constructor stub

}

class_excerise::~class_excerise() {
	// TODO Auto-generated destructor stub
	delete _p_head;
}

class_excerise_node::class_excerise_node() {
	// TODO Auto-generated destructor stub
}

class_excerise_node::~class_excerise_node() {
	// TODO Auto-generated destructor stub
	delete p_next;
}


void class_excerise::insert(int val){
}

class_excerise& class_excerise::operator =(const class_excerise& other){
	if ( this == & other )
	{
		return *this;
	}
	delete _p_head;
	_p_head = NULL;
	class_excerise_node *p_itr = other._p_head;
	while ( p_itr != NULL)
	{
		insert ( p_itr->val );
	}
	return *this;
}

int tmp2(){
	class_excerise test_instance;
	class_excerise test_instance2;
	test_instance2 = test_instance;
	return 0;
}
