/*
 * trie_tree_node.h
 *
 *  Created on: Dec 13, 2016
 *      Author: masayaogushi
 */

#ifndef TRIE_TREE_NODE_H_
#define TRIE_TREE_NODE_H_
#include <vector>
#include <iostream>
#define ALPHABETS 26
using namespace std;

using namespace std;
class trie_tree_node {
public:
	trie_tree_node();
	virtual ~trie_tree_node();
	trie_tree_node *root;
	trie_tree_node *parent;
	trie_tree_node *children[ALPHABETS];
	vector<int> occurrences;
    void insert(char text[], int index);
    void lexicographPrint(trie_tree_node *trie_tree, vector<char> printUtilVectr);
    trie_tree_node* searchWord(trie_tree_node* trie_tree_data, char *text);
    void removeWord(trie_tree_node *trie_tree_data, char *word);
};

#endif /* TRIE_TREE_NODE_H_ */
