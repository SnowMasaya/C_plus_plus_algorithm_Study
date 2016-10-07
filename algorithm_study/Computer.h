/*
 * Computer.h
 *
 *  Created on: Oct 6, 2016
 *      Author: masayaogushi
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_

class Computer {
public:
	Computer();
	virtual ~Computer();
	void setspeed ( int p );
	int readspeed();
protected:
    // This means that all the variables under this, until a new type of
    //  restriction is placed, will only be accessible to other functions in the
    //  class.  NOTE: That is a colon, NOT a semicolon...
    int processorspeed;
};

#endif /* COMPUTER_H_ */
