/*
 * trie_tree_node.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: masayaogushi
 */

#include "trie_tree_node.h"
#include <cstring>
using namespace std;

trie_tree_node::trie_tree_node() {
	// TODO Auto-generated constructor stub
}

trie_tree_node::~trie_tree_node() {
	// TODO Auto-generated destructor stub
}

void trie_tree_node::insert(char text[], int index){
	vector<char> word(text, text + strlen(text));
	trie_tree_node *temp = this->root;

	int i = 0;

	while(i < word.size()){
		if(temp->children[word[i] - 'a'] == NULL){
			temp->children[word[i] - 'a'] = new trie_tree_node();
			temp->children[word[i] - 'a']->parent = temp;
		}
		temp = temp->children[word[i] - 'a'];
		++i;
	}
	temp->occurrences.push_back(index);
}

void trie_tree_node::lexicographPrint(trie_tree_node *trie_tree, vector<char> printUtilVectr){
	int i;
	bool noChild = true;
	vector<int>::iterator itr = trie_tree->occurrences.begin();

	for(i = 0; i < ALPHABETS; i++){
		if(trie_tree->children[i] != NULL){
			noChild = false;
			printUtilVectr.push_back('a' + i);
			lexicographPrint(trie_tree->children[i], printUtilVectr);
			printUtilVectr.pop_back();
		}
	}
	if (trie_tree->occurrences.size() == 0){
		return;
	}else{
		for(vector<char>::iterator itr = printUtilVectr.begin(); itr != printUtilVectr.end(); ++itr){
			cout << *itr;
		}
		cout << " -> @ index " ;

		for(vector<int>::iterator counter = trie_tree->occurrences.begin(); counter != trie_tree->occurrences.end(); ++counter){
			cout << *counter << " ";
		}
		cout << endl;
	}

	printUtilVectr.pop_back();
}

trie_tree_node* trie_tree_node::searchWord(trie_tree_node* trie_tree_data, char *text){

	vector<char> word(text, text + strlen(text));
	trie_tree_node *temp = trie_tree_data;

	while(word.size() != 0){
		if(temp->children[word[0] - 'a'] != NULL){
			temp = temp->children[word[0] - 'a'];
			word.erase(word.begin());
		} else {
			break;
		}
	}

	if(word.size() == 0 && temp->occurrences.size() != 0) {
		return temp;
	} else {
		return NULL;
	}
}

void trie_tree_node::removeWord(trie_tree_node *trie_tree_data, char *word){
	trie_tree_node *temp = searchWord(trie_tree_data, word);
	if(temp == NULL){
		return;
	}

	temp->occurrences.pop_back();

	bool noChild = true;

	int childCount = 0;
	int i;

	for(i = 0; i < ALPHABETS; ++i){
		if(temp->children[i] != NULL){
			noChild = false;
			++childCount;
		}
	}
	if(!noChild){
		return;
	}

	trie_tree_node *traverse;

	while(temp->occurrences.size() == 0 && temp->parent != NULL && childCount < 2){
		traverse = temp->parent;

		for(i = 0; i < ALPHABETS; ++i){
			if(temp == traverse->children[i]){
				traverse->children[i] = NULL;
				break;
			}
		}
	    temp = traverse;

	    for(i = 0; i < ALPHABETS; ++i){
	    	if(temp->children[i] != NULL){
	    		++childCount;
	    	}
	    }
	}
}
