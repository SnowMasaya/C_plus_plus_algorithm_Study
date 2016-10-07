/*
 * argc_argv.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: masayaogushi
 */
#include <fstream>
#include <iostream>

#include "argc_argv.h"

using namespace std;

argc_argv::argc_argv() {
	// TODO Auto-generated constructor stub
}

argc_argv::~argc_argv() {
	// TODO Auto-generated destructor stub
}

void argc_argv::file_read(char *file_name) {
   	ifstream the_file ( file_name );
   	if ( ! the_file.is_open() )
         	cout << "Could not open file\n";
   	else {
           while ( the_file.get (file_contents) )
             	cout << file_contents;
   	}
}

int main (int argc, char *argv[] )
{
    if (argc != 2)
    	cout << "usage: " << argv[0] << " <filename>\n";
    else {
    	argc_argv argc_argv_instance;
    	argc_argv_instance.file_read( argv[1] );
    }
}
