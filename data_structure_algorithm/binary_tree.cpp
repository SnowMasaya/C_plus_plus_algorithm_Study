/*
 * binary_tree.cpp
 *
 *  Created on: Dec 10, 2016
 *      Author: masayaogushi
 */

#include "binary_tree.h"
#include <iostream>
using namespace std;

binary_tree::binary_tree() {
	// TODO Auto-generated constructor stub

}

binary_tree::~binary_tree() {
	// TODO Auto-generated destructor stub
}

node* binary_tree::insert(node *p_tree, int key){

	if(p_tree == NULL){
		node *p_new_tree = new node;
		p_new_tree->key_value = key;
		p_new_tree->p_left = NULL;
		p_new_tree->p_right = NULL;
		return p_new_tree;
	}
	if(key < p_tree->key_value){
		p_tree->p_left = insert(p_tree->p_left, key);
	}
	if(key > p_tree->key_value){
		p_tree->p_right = insert(p_tree->p_right, key);
	}
	return p_tree;
}

void binary_tree::nodeShow(node* p_tree){
	if(p_tree != NULL){
		cout << p_tree->key_value << endl;
	    if(p_tree->p_left != NULL){
	    	nodeShow(p_tree->p_left);
	    }
	    if(p_tree->p_right != NULL){
	    	nodeShow(p_tree->p_right);
	    }
	}
}

int binary_tree::search(node *p_tree, int key){
	if(p_tree == NULL){
		return NULL;
	}
	if(p_tree->key_value == key){
		return p_tree->key_value;
	}
	else if(key < p_tree->key_value){
		return search(p_tree->p_left, key);
	}else if(key > p_tree->key_value){
		return search(p_tree->p_right, key);
	}
}

node binary_tree::destroy_tree(node *p_tree){
	if(p_tree != NULL){
	    destroy_tree(p_tree->p_left);
	    destroy_tree(p_tree->p_right);
		delete p_tree;
	}
}

node* binary_tree::find_max(node *p_tree){
	if(p_tree == NULL){
		return NULL;
	}else if(p_tree->p_right == NULL){
		return p_tree;
	}else{
		return find_max(p_tree->p_right);
	}
}

node* binary_tree::find_min(node *p_tree){
	if(p_tree == NULL){
		return NULL;
	}else if(p_tree->p_left == NULL){
		return p_tree;
	}else{
		return find_max(p_tree->p_left);
	}
}

node* remove_max_node(node *p_tree, node *p_max_node){
	if(p_tree == NULL){
		return NULL;
	}
	if(p_tree == p_max_node){
		return p_tree->p_left;
	}else{
		remove_max_node(p_tree->p_right, p_max_node);
	}
}

node* binary_tree::remove(node *p_tree, int remove_value){
	if(p_tree == NULL){
		return NULL;
	}
	if(p_tree->key_value == remove_value){
	    if(p_tree->p_left == NULL){
	    	node *p_right_sub_tree = p_tree->p_right;
	    	delete p_tree;
	    	return p_right_sub_tree;
	    }
	    if(p_tree->p_right == NULL){
	    	node *p_right_sub_tree = p_tree->p_right;
	    	delete p_tree;
	    	return p_right_sub_tree;
	    }
	    node *p_max_node = find_max(p_tree->p_left);
	    p_max_node->p_left = remove_max_node(p_tree->p_left, p_max_node);
	    p_max_node->p_right = p_tree->p_right;
	    delete p_tree;
	    return p_max_node;
	}else if(p_tree->key_value < remove_value){
		remove(p_tree->p_left, remove_value);
	}else{
		remove(p_tree->p_right, remove_value);
	}
}
