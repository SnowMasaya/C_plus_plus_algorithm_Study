/*
 * excerise.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: masayaogushi
 */

#include "excerise.h"
#include "merge_sort.h"
#include "insert_sort.h"
#include "counting_sort.h"
#include "binary_tree.h"
#include "quick.h"
#define ARRAY_SIZE 7
#include <iostream>
using namespace std;

excerise::excerise() {
	// TODO Auto-generated constructor stub

}

excerise::~excerise() {
	// TODO Auto-generated destructor stub
}

void show_array(int *sort_data){
	for(int i = 0; i < ARRAY_SIZE; ++i ){
		cout << sort_data[i] << endl;
	}
}

int main(){
	int array_data[ARRAY_SIZE] = {0, 3, 2, 4, 5, 1, 9};
    //merge_sort *merge_sort_instance = new merge_sort();
	//merge_sort_instance->merge_method(array_data, 0, ARRAY_SIZE);
	//show_array(array_data);
	//insert_sort *insert_sort_instance = new insert_sort();
	//insert_sort_instance->insert_method(array_data);
	//show_array(array_data);
	//quick *quick_sort_instance = new quick();
	//quick_sort_instance->quick_method(array_data, 0, ARRAY_SIZE);
	//show_array(array_data);
	//counting_sort *couting_sort_instance = new counting_sort();
	//couting_sort_instance->counting_sort_method(array_data);
	//show_array(array_data);
	binary_tree *binary_tree_instance = new binary_tree();
	node *p_tree = binary_tree_instance->insert(NULL, 10);
	binary_tree_instance->insert(p_tree, 5);
	binary_tree_instance->insert(p_tree, 12);
	binary_tree_instance->insert(p_tree, 6);
	binary_tree_instance->insert(p_tree, 4);
	binary_tree_instance->insert(p_tree, 11);
	binary_tree_instance->insert(p_tree, 14);
	binary_tree_instance->nodeShow(p_tree);
	int find_value = binary_tree_instance->search(p_tree, 20);
	cout << "find:" << find_value << endl;
	node *max_value_node = binary_tree_instance->find_max(p_tree);
	cout << "max:" << max_value_node->key_value << endl;
	node *min_value_node = binary_tree_instance->find_min(p_tree);
	cout << "min:" << min_value_node->key_value << endl;
	binary_tree_instance->destroy_tree(p_tree);
	return 0;
}
