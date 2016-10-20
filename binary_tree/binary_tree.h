/*
 * binary_tree.h
 *
 *  Created on: Oct 14, 2016
 *      Author: masayaogushi
 */

#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

struct node {
	int key_value;
	node *left;
	node *right;
};

class binary_tree {
public:
	binary_tree();
	virtual ~binary_tree();

	void insert(int key);
	node *search(int key);
	void destroy_tree();
private:
	void destroy_tree(node *leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);

	node *root;
};

#endif /* BINARY_TREE_H_ */
