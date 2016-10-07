/*
 * Link_List.h
 *
 *  Created on: Oct 7, 2016
 *      Author: masayaogushi
 */

#ifndef LINK_LIST_H_
#define LINK_LIST_H_

struct node {
	int x;
	node *next;
};

class Link_List {
public:
	Link_List();
	virtual ~Link_List();
};

#endif /* LINK_LIST_H_ */
