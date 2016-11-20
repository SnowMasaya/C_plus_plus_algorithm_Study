/*
 * Linked_list_excerise.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: masayaogushi
 */

#include "Linked_list_excerise.h"

Linked_list_excerise::Linked_list_excerise() {
	// TODO Auto-generated constructor stub

}

Linked_list_excerise::~Linked_list_excerise() {
	// TODO Auto-generated destructor stub
}

EnemySpaceShip* getNewEnemy()
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	EnemySpaceShip* p_enemies = NULL;
	p_ship->x_coordinate = 0;
	p_ship->y_coordinate = 10;
	p_ship->weapon_power = 20;
	p_ship->p_next_enemy = p_enemies;
	p_enemies = p_ship;
	return p_ship;
}

EnemySpaceShip* addNewEnemyToList(EnemySpaceShip* p_list)
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship->x_coordinate = 10;
	p_ship->y_coordinate = 20;
	p_ship->weapon_power = 30;
	p_ship->p_next_enemy = p_list;
	return p_ship;
}

void upgradeWeapons(EnemySpaceShip* p_ship)
{
	p_ship->weapon_power += 10;
}

void PrintList(EnemySpaceShip* p_ship)
{
	cout << "x_coordinate: " << p_ship->x_coordinate << endl;
	cout << "y_coordinate: " << p_ship->y_coordinate << endl;
	cout << "weapon_power: " << p_ship->weapon_power << endl;
}

EnemySpaceShip* removeToList(EnemySpaceShip* p_list)
{
	EnemySpaceShip* p_next_enemy = p_list->p_next_enemy;
	EnemySpaceShip* p_past_enemy = p_list;
	while( true )
	{
    	p_next_enemy = p_next_enemy->p_next_enemy;
		if (p_next_enemy == NULL)
		{
    	    p_past_enemy->p_next_enemy = NULL;
			break;
		}
    	p_past_enemy = p_next_enemy;
	}
	return p_list;
}

int tmp5_main()
{
	EnemySpaceShip* p_enemy = getNewEnemy();
	upgradeWeapons( p_enemy );
	p_enemy = addNewEnemyToList( p_enemy );
	p_enemy = addNewEnemyToList( p_enemy );
	p_enemy = addNewEnemyToList( p_enemy );
    p_enemy = removeToList( p_enemy );
	while (p_enemy != NULL)
	{
		PrintList( p_enemy );
		p_enemy = p_enemy->p_next_enemy;
	}
}
