/*
 * Computer.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: masayaogushi
 */
#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer() {
	// TODO Auto-generated constructor stub
	processorspeed = 0;
}

Computer::~Computer() {
	// TODO Auto-generated destructor stub
}

void Computer::setspeed ( int p )
{
  // To define a function outside put the name of the class
  //  after the return type and then two colons, and then the name
  //  of the function.
  processorspeed = p;
}

int Computer::readspeed()
{
  // The two colons simply tell the compiler that the function is part
  //  of the class
  return processorspeed;
}

int main()
{
    Computer computer;
    computer.setspeed(100);
    cout << computer.readspeed();
}
