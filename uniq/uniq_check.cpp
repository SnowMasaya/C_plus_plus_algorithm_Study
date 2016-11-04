/*
 * uniq_check.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: masayaogushi
 */

#include "uniq_check.h"
#include <map>

uniq_check::uniq_check() {
	// TODO Auto-generated constructor stub

}

uniq_check::~uniq_check() {
	// TODO Auto-generated destructor stub
}

bool uniq_check::uniq_check_method(string string_data){
	 if (string_data.length() > 256)
	 {
	     return false;
	 }
	 map<char, bool> char_hash;
     char cstr;

	 for (int i = 0; i < string_data.length(); i++){
         cstr = string_data[i];
		 if (char_hash[cstr] == true){
			 return false;
		 }
         char_hash[cstr] = true;
	 }
     return true;
}

int main(){

	string input_string;
	cin >> input_string;
	uniq_check uniq_check_instance;
	bool judge = uniq_check_instance.uniq_check_method(input_string);
	if (judge == true){
		cout << "Uniq" << endl;
	}else{
		cout << "Non Uniq" << endl;
	}
}
