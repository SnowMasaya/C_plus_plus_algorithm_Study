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
#include "graph.h"
#include "dynamic_programing.h"
#define ARRAY_SIZE 7
#define MAX_WORD_SIZE 20
#include <iostream>
#include <map>
#include <string>
using namespace std;
enum{
	Merge = 1,
	Insert = 2,
	Quick = 3,
	Counting = 4,
	Binary = 5,
	Graph = 6,
	Dynamic = 7
};

excerise::excerise() {
	// TODO Auto-generated constructor stub

}

excerise::~excerise() {
	// TODO Auto-generated destructor stub
}

void show_array(int *sort_data){
	for(int i = 0; i < ARRAY_SIZE; ++i ){
		cout << sort_data[i] << " ";
	}
}

int main(int argc, char* argv[]){

	if(argc != 2){
		cout << "You have to set the one arguments {Merge or Insert or Quick or Counting or Binary or Graph or Dynamic}" << endl;
		exit(EXIT_FAILURE);
	}

	int array_data[ARRAY_SIZE] = {0, 3, 2, 4, 5, 1, 9};
	static map<string, int> switch_case;

	if(switch_case.empty())
	{
		switch_case["Merge"] = Merge;
		switch_case["Insert"] = Insert;
		switch_case["Quick"] = Quick;
		switch_case["Counting"] = Counting;
		switch_case["Binary"] = Binary;
		switch_case["Graph"] = Graph;
		switch_case["Dynamic"] = Dynamic;
	}

	int switch_judge = switch_case[argv[1]];

	switch(switch_judge){
	    case Merge:
	    {
	        merge_sort *merge_sort_instance = new merge_sort();
	        merge_sort_instance->merge_method(array_data, 0, ARRAY_SIZE);
	        cout << "Merge Sort" << endl;
	        show_array(array_data);
	        cout << endl;
	        delete merge_sort_instance;
            break;
	    }
	    case Insert:
	    {
	        insert_sort *insert_sort_instance = new insert_sort();
	        insert_sort_instance->insert_method(array_data);
	        cout << "Insert Sort" << endl;
	        show_array(array_data);
	        cout << endl;
	        delete insert_sort_instance;
            break;
	    }
	    case Quick:
	    {
	        quick *quick_sort_instance = new quick();
	        quick_sort_instance->quick_method(array_data, 0, ARRAY_SIZE - 1);
	        cout << "Quick Sort" << endl;
	        show_array(array_data);
	        cout << endl;
	        delete quick_sort_instance;
            break;
	    }
	    case Counting:
	    {
	        counting_sort *counting_sort_instance = new counting_sort();
	        counting_sort_instance->counting_sort_method(array_data);
	        cout << "Counting Sort" << endl;
	        show_array(array_data);
	        cout << endl;
	        delete counting_sort_instance;
            break;
	    }
	    case Binary:
	    {
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
	        cout << "Binary Tree" << endl;
	        cout << "find:" << find_value << endl;
	        node *max_value_node = binary_tree_instance->find_max(p_tree);
	        cout << "max:" << max_value_node->key_value << endl;
	        node *min_value_node = binary_tree_instance->find_min(p_tree);
	        cout << "min:" << min_value_node->key_value << endl;
	        binary_tree_instance->destroy_tree(p_tree);
	        delete binary_tree_instance;
            break;
	    }
	    case Graph:
	    {
	        graph *graph_instance = new graph(4);
	        cout << "Graph " << endl;
	        graph_instance->addEdge(0, 1);
	        graph_instance->addEdge(0, 2);
	        graph_instance->addEdge(1, 2);
	        graph_instance->addEdge(2, 0);
	        graph_instance->addEdge(2, 3);
	        graph_instance->addEdge(3, 3);
	        cout << "Following is Depth First Traversal (starting from vertex 2) " << endl;
	        graph_instance->depth_first_search(2);
	        cout << "Following is Breadth First Traversal (starting from vertex 2) " << endl;
	        graph_instance->breadth_first_search(2);
	        delete graph_instance;
            break;
	    }
	    case Dynamic:
	    {
	        int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
	        int n = sizeof(arr)/sizeof(arr[0]);
	        dynamic_programing *dynamic_programing_instance = new dynamic_programing();
	        cout << "Dynamic " << endl;
	        cout << "Length of LIS is " << dynamic_programing_instance->lis(arr, n) << endl;
	        cout << "Length of LIS is " << dynamic_programing_instance->lis_bottom_up(arr, n) << endl;
	        delete dynamic_programing_instance;
            break;
	    }
	    default:
	    {
	    	break;
	    }
	}
	exit(EXIT_SUCCESS);
	return 0;
}
