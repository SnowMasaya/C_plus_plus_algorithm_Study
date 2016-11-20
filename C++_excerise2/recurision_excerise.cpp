/*
 * recurision_excerise.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#include "recurision_excerise.h"
#include <stack>

recurision_excerise::recurision_excerise() {
	// TODO Auto-generated constructor stub

}

recurision_excerise::~recurision_excerise() {
	// TODO Auto-generated destructor stub
}

struct node
{
	int value;
	node *next;
};

node* search (node* list, int value_to_find)
{
	if ( list == NULL)
	{
		return NULL;
	}

	if (list->value == value_to_find)
	{
		return list;
	}
	else
	{
		return search(list->next, value_to_find);
	}
}

node* addNewToList(node* n_list, int set_value)
{
	node* n_ship = new node;
	n_ship->value = set_value;
	n_ship->next = n_list;
	return n_ship;
}

void showArray(stack<int> show_stack)
{
	if(show_stack.empty()){
	    cout << "End" << endl;
	}
	else{
	    cout << show_stack.top() << endl;
	    show_stack.pop();
	    showArray(show_stack);
	}
}

int tmp6_main()
{
	node* node_list = new node;
	node* search_node_list = new node;
	node_list->value = 1;
	node_list->next = NULL;
	node_list = addNewToList(node_list, 4);
	node_list = addNewToList(node_list, 40);
	cout << "node: " << node_list->value << endl;
	search_node_list = search(node_list, 1);
	cout << "search node: "<< search_node_list->value << endl;
	stack<int> mystack;
	for(int i=0; i<5; i++)
	{
		mystack.push(i);
	}
	showArray(mystack);
	return 0;
}
