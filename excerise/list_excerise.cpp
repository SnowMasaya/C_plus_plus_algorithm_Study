/*
 * list_excerise.cpp
 *
 *  Created on: Nov 30, 2016
 *      Author: masayaogushi
 */

#include "list_excerise.h"
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

list_excerise::list_excerise() {
	// TODO Auto-generated constructor stub

}

list_excerise::~list_excerise() {
	// TODO Auto-generated destructor stub
}

map<char, int> check_map(char *original_text){
	map <char, int> check_string;
	int size_iterator =  strlen(original_text);
	for(int i = 0; i < size_iterator ; i++){
		if(check_string.count(original_text[i]) == 0){
			check_string[original_text[i]] = 1;
		} else {
			int text_count = check_string[original_text[i]];
			check_string[original_text[i]] = text_count + 1;
		}
	}
	return check_string;
}

void show_map_value(map<char, int> map_value){
	for(map<char, int>::iterator it = map_value.begin(); it != map_value.end(); ++it){
		cout << it->first << endl;
		cout << it->second << endl;
	}
}

bool list_excerise::check_reverse(char *original_text, char* original_text2){
	map <char, int> check_string = check_map(original_text);
	map <char, int> check_string2 = check_map(original_text2);

	show_map_value(check_string);
	show_map_value(check_string2);

	return true;
}

int main(int argc, char *argv[]){
	char *original_text = argv[1];
	char *original_text2 = argv[2];
	list_excerise list_excerise_instance;
	list_excerise_instance.check_reverse(original_text, original_text2);
	return 0;
}
