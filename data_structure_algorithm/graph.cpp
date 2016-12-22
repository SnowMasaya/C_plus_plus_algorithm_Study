/*
 * graph.cpp
 *
 *  Created on: Dec 11, 2016
 *      Author: masayaogushi
*       Reference: http://www.geeksforgeeks.org/depth-first-traversal-for-a-graph/
 */

#include "graph.h"



graph::graph(int V) {
	// TODO Auto-generated constructor stub
	this->V = V;
	adj = new list<int>[V];
}

graph::~graph() {
	// TODO Auto-generated destructor stub
}

void graph::addEdge(int v, int edge){
	adj[v].push_back(edge);
}

void graph::depth_first_search_util(int v, bool visited[]){
	visited[v] = true;
	cout << v << " " << endl;
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i){
		if(!visited[*i]){
			depth_first_search_util(*i, visited);
		}
	}
}

void graph::depth_first_search(int v){
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++){
		visited[i] = false;
	}
	for(int i = 0; i < V; i++){
	    if(visited[i] == false){
	    	depth_first_search_util(i, visited);
	    }
	}
}

void graph::breadth_first_search(int s){

	bool *visited = new bool[V];
	for(int i = 0; i < V; i++){
		visited[i] = false;
	}
	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while(!queue.empty()){
		s = queue.front();
		cout << s << " " << endl;
		queue.pop_front();
		for(i = adj[s].begin(); i != adj[s].end(); ++i){
			if(!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
