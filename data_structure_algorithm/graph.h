/*
 * graph.h
 *
 *  Created on: Dec 11, 2016
 *      Author: masayaogushi
 */

#ifndef GRAPH_H_
#define GRAPH_H_
#include<iostream>
#include<list>
using namespace std;

class graph {
public:
	graph();
	virtual ~graph();
	graph(int V);
	void addEdge(int v, int w);
	void depth_first_search(int v);
	void breadth_first_search(int s);
private:
	int V;
	list<int> *adj;
	void depth_first_search_util(int v, bool visited[]);
};

#endif /* GRAPH_H_ */
