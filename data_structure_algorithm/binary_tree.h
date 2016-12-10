/*
 * binary_tree.h
 *
 *  Created on: Dec 10, 2016
 *      Author: masayaogushi
 */

#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

struct node{
	int key_value;
	node *p_left;
	node *p_right;
};

class binary_tree {
public:
	binary_tree();
	virtual ~binary_tree();
	node* insert(node *p_tree, int key);
	int search(node *p_tree, int key);
    void nodeShow(node* p_tree);
    node destroy_tree(node *p_tree);
    node* find_max(node *p_tree);
    node* find_min(node *p_tree);
    node* remove(node *p_tree, int remove_value);
};

#endif /* BINARY_TREE_H_ */
