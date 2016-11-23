/*
 * Inheriment_excerise.h
 *
 *  Created on: Nov 23, 2016
 *      Author: masayaogushi
 */
#include <string>
#include <cstring>
using namespace std;

#ifndef INHERIMENT_EXCERISE_H_
#define INHERIMENT_EXCERISE_H_

class Inheriment_excerise {
public:
	Inheriment_excerise();
	virtual ~Inheriment_excerise();
	string getName();
	virtual void draw() = 0;
private:
	string name;
};

class Ship : public Inheriment_excerise{
protected:
	virtual void draw();
private:
	string name;
};

class Enemy : public Inheriment_excerise{
protected:
	virtual void draw();
private:
	string name;
};

class SuperClass
{
public:
	SuperClass() {}
private:
	SuperClass (const SuperClass& other);
};

class Subclass : public SuperClass
{
	int val;
};

class Node
{
public:
	Node();
private:
	static int _getNextSerialNumber;
	static int _next_serial_number;
	int _serial_number;
};

#endif /* INHERIMENT_EXCERISE_H_ */
