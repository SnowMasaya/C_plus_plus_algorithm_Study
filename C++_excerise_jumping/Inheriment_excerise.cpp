/*
 * Inheriment_excerise.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */

#include "Inheriment_excerise.h"
#include <iostream>
#include <vector>
using namespace std;

Inheriment_excerise::Inheriment_excerise() {
	// TODO Auto-generated constructor stub

}

Inheriment_excerise::~Inheriment_excerise() {
	// TODO Auto-generated destructor stub
}

string Inheriment_excerise::getName (){
	this->name = "hoge";
	return this->name;
}


void Inheriment_excerise::draw (){
	cout << "Inheriment_excerise" << endl;
}

void Ship::draw (){
	cout << "Ship" << endl;
}

void Enemy::draw (){
	cout << "Enemy" << endl;
}

int tmp3(){
	vector<Inheriment_excerise*> inheriment_excerise;
	inheriment_excerise.push_back( new Ship() );
	inheriment_excerise.push_back( new Enemy() );

	for (vector<Inheriment_excerise*>::iterator itr = inheriment_excerise.begin(), end = inheriment_excerise.end(); itr != end; ++ itr)
	{
		(*itr)->draw();
		cout << (*itr)->getName() << endl;
	}

	return 0;
}
