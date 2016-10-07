/*
 * Link_List.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: masayaogushi
 */

#include "Link_List.h"
#include <iostream>

using namespace std;

Link_List::Link_List() {
	// TODO Auto-generated constructor stub

}

Link_List::~Link_List() {
	// TODO Auto-generated destructor stub
}

int main(){
	node *root;
	node *conductor;

	root = new node;
	root->next = 0;
	root->x = 12;
	conductor = root;
	if ( conductor != 0) {
		while( conductor->next != 0) {
			conductor = conductor->next;
		}
	}
	conductor->next = new node;
	conductor = conductor->next;
	conductor->next = 0;
	conductor->x = 42;
}
