/*
 * class_excerise.h
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#ifndef CLASS_EXCERISE_H_
#define CLASS_EXCERISE_H_

class class_excerise_node{
public:
	class_excerise_node();
	virtual ~class_excerise_node();
	int val;
	class_excerise_node *p_next;
};

class class_excerise {
public:
	class_excerise();
	virtual ~class_excerise();
	class_excerise& operator = (const class_excerise& other);
	void insert(int val);
private:
	class_excerise_node *_p_head;
};

#endif /* CLASS_EXCERISE_H_ */
