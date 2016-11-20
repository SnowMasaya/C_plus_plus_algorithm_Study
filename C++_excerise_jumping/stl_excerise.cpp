/*
 * stl_excerise.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: masayaogushi
 */

#include "stl_excerise.h"
#include <iostream>
#include <vector>
#include <map>

using namespace std;

stl_excerise::stl_excerise() {
	// TODO Auto-generated constructor stub

}

stl_excerise::~stl_excerise() {
	// TODO Auto-generated destructor stub
}

void displayMap (map<string, string> map_to_print)
{
	for ( map<string, string>::iterator itr = map_to_print.begin(), end = map_to_print.end(); itr != end; ++itr)
	{
		cout << itr->first << " --> " << itr->second << endl;
	}

}

int main()
{
    vector<int> a_vector;
	a_vector.push_back(1);
	a_vector.push_back(2);

	for ( vector<int>::iterator itr = a_vector.begin(); itr != a_vector.end(); itr++)
	{
		cout << *itr << endl;
	}

	map<string, string> name_to_email;
	name_to_email[" Alex Allian "] = "webmaster@cprogram.com";
	name_to_email[" Hoge Hoge "] = "hogehoge@cprogram.com";

	displayMap(name_to_email);

	map<string, string>::iterator itr = name_to_email.find(" Alex Allian ");
	if (itr != name_to_email.end())
	{
		cout << "How nice to see Alex again " << itr->second << endl;
	}

	return 0;
}
