/*
 * ListInitialize.h
 *
 *  Created on: Oct 24, 2016
 *      Author: masayaogushi
 */

#ifndef LISTINITIALIZE_H_
#include <iostream>
#define LISTINITIALIZE_H_

class ListInitialize {
public:
	ListInitialize() : _foo("initialize to this") {};
	virtual ~ListInitialize();
private:
	std::string _foo;
};

class Baz {
public:
	Baz( std::string foo ) : foo( foo ), _bar("then bar") {};
	virtual ~Baz();
private:
	std::string foo;
	std::string _bar;
};

#endif /* LISTINITIALIZE_H_ */
