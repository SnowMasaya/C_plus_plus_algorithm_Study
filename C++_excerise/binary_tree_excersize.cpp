/*
 * binary_tree_excersize.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#include "binary_tree_excersize.h"
#include <iostream>

using namespace std;

binary_tree_excersize::binary_tree_excersize() {
	// TODO Auto-generated constructor stub

}

binary_tree_excersize::~binary_tree_excersize() {
	// TODO Auto-generated destructor stub
}

struct node
{
	int key_value;
	node *p_left;
	node *p_right;
};

node* insert (node *p_tree, int key)
{
	if (p_tree == NULL)
	{
		node* p_new_tree = new node;
		p_new_tree->p_left = NULL;
		p_new_tree->p_right = NULL;
		p_new_tree->key_value = key;
		return p_new_tree;
	}
	if (key < p_tree->key_value)
	{
		p_tree->p_left = insert( p_tree->p_left, key);
	}
	if (key > p_tree->key_value)
	{
		p_tree->p_right = insert( p_tree->p_right, key);
	}
	return p_tree;
}

node *search_binary(node *p_tree, int key)
{
	if( p_tree == NULL)
	{
		return NULL;
	}
	else if(key == p_tree->key_value)
	{
		return p_tree;
	}
	else if(key < p_tree->key_value)
	{
		return search_binary(p_tree->p_left, key);
	}
	else
	{
		return search_binary(p_tree->p_right, key);
	}
}

void destroy_tree(node *p_tree)
{
	if (p_tree != NULL)
	{
		destroy_tree(p_tree->p_left);
		destroy_tree(p_tree->p_right);
		delete p_tree;
	}
}

node* find_max (node* p_tree)
{
	if ( p_tree == NULL )
	{
		return NULL;
	}
	if ( p_tree->p_right == NULL )
	{
		return p_tree;
	}
	return find_max( p_tree->p_right );
}

node* find_min (node* p_tree)
{
	if( p_tree == NULL)
	{
		return NULL;
	}
	if ( p_tree->p_left == NULL)
	{
		return p_tree;
	}
	return find_min( p_tree->p_left );
}

node* remove_max_node (node* p_tree, node* p_max_node)
{
	if ( p_tree == NULL )
	{
		return NULL;
	}
	if ( p_tree == p_max_node)
	{
		return p_max_node->p_left;
	}
	p_tree->p_right = remove_max_node( p_tree->p_right, p_max_node);
	return p_tree;
}

node* remove (node* p_tree, int key)
{
	if ( p_tree == NULL)
	{
		return NULL;
	}

	if (p_tree->key_value == key)
	{
		if (p_tree->p_left == NULL)
		{
			node* p_right_subtree = p_tree->p_right;
			delete p_tree;
			return p_right_subtree;
		}
		if ( p_tree->p_right == NULL)
		{
			node* p_left_subtree = p_tree->p_left;
			delete p_tree;
			return p_left_subtree;
		}
		node* p_max_node = find_max( p_tree->p_left );
		p_max_node->p_left = remove_max_node( p_tree->p_left, p_max_node);
		p_max_node->p_right = p_tree->p_right;
		delete p_tree;
		return p_max_node;
	}
	else if (key < p_tree->key_value)
	{
		p_tree->p_left = remove( p_tree->p_left, key);
	}
	else
	{
		p_tree->p_right = remove( p_tree->p_right, key);
	}
	return p_tree;
}

void showNode (node* p_tree)
{
	if (p_tree != NULL){
     	cout << p_tree->key_value << endl;
	    if(p_tree->p_left != NULL)
	    {
     	    cout << " /" << endl;
	    	showNode(p_tree->p_left);
	    }
	    if(p_tree->p_right != NULL)
	    {
     	    cout << "\\ " << endl;
	    	showNode(p_tree->p_right);
	    }
	}
}

node* sortFunction (node* p_tree, node* value_node)
{
    cout << value_node->key_value << endl;
	p_tree = remove( p_tree, value_node->key_value );
	return p_tree;
}

void reverseSortShow(node* p_tree)
{
	node* value_node = find_min( p_tree );
	p_tree = sortFunction( p_tree, value_node);
	if ( p_tree != NULL )
	{
	    reverseSortShow( p_tree );
	}
}

void sortShow(node* p_tree)
{
	node* value_node = find_max( p_tree );
	p_tree = sortFunction( p_tree, value_node);
	if ( p_tree != NULL )
	{
	    sortShow( p_tree );
	}
}

int main()
{
	node* node_test = NULL;
	node* search_node_test = new node;
	node_test = insert(node_test, 10);
	node_test = insert(node_test, 5);
	node_test = insert(node_test, 12);
	node_test = insert(node_test, 6);
	node_test = insert(node_test, 4);
	node_test = insert(node_test, 11);
	node_test = insert(node_test, 14);
	//reverseSortShow(node_test);
	sortShow(node_test);
	//search_node_test = search_binary(node_test, 5);
	//cout << search_node_test->key_value << endl;
	//destroy_tree(search_node_test);
	//search_node_test = search_binary(node_test, 12);
	//cout << search_node_test->key_value << endl;
	return 0;
}
