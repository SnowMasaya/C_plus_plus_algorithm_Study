/*
 * binary_tree.cpp
 *
 *  Created on: Oct 14, 2016
 *      Author: masayaogushi
 */

#include "binary_tree.h"
#include <iostream>
#include <stddef.h>
using namespace std;

binary_tree::binary_tree() {
	// TODO Auto-generated constructor stub
	root = NULL;
}

binary_tree::~binary_tree() {
	// TODO Auto-generated destructor stub
	destroy_tree();
}

void binary_tree::destroy_tree(node *leaf)
{
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void binary_tree::insert(int key, node *leaf)
{
	if(key < leaf->key_value){
		if(leaf->left != NULL)
			insert(key, leaf->left);
		else{
			leaf->left = new node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
	else if(key > leaf->key_value){
		if(leaf->right != NULL)
			insert(key, leaf->right);
		else{
			leaf->right = new node;
			leaf->right->key_value = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
}

node *binary_tree::search(int key, node *leaf)
{
	if(leaf != NULL)
	{
		if(key == leaf->key_value)
			return leaf;
		if(key < leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	}
	else return NULL;
}

void binary_tree::insert(int key)
{
	if(root != NULL)
		insert(key, root);
	else{
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *binary_tree::search(int key)
{
	return search(key, root);
}

void binary_tree::destroy_tree()
{
	destroy_tree(root);
}

int main()
{
	int number_array [7] = {10, 6, 14, 5, 8 ,11, 18};
	binary_tree binary_tree_instance;
	for(int i = 0; i < sizeof(number_array) / sizeof(*number_array); i = i + 1){
	    binary_tree_instance.insert(number_array[i]);
	}
   	cout << binary_tree_instance.search(14)->key_value << endl;
   	cout << binary_tree_instance.search(14)->left->key_value << endl;
   	cout << binary_tree_instance.search(14)->right->key_value << endl;
}
