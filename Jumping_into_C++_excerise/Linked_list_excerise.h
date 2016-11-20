/*
 * Linked_list_excerise.h
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#ifndef LINKED_LIST_EXCERISE_H_
#define LINKED_LIST_EXCERISE_H_
#include <iostream>

using namespace std;

struct EnemySpaceShip
{
	int x_coordinate;
	int y_coordinate;
	int weapon_power;
	EnemySpaceShip* p_next_enemy;
};

class Linked_list_excerise {
public:
	Linked_list_excerise();
	virtual ~Linked_list_excerise();
};

#endif /* LINKED_LIST_EXCERISE_H_ */
