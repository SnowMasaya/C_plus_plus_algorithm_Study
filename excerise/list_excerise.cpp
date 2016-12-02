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
#include <vector>
using namespace std;
#define ARRAY_SIZE 6
#define SENTINEL 1000000000

list_excerise::list_excerise() {
	// TODO Auto-generated constructor stub

}

list_excerise::~list_excerise() {
	// TODO Auto-generated destructor stub
}

map<char, int>* check_map(char *original_text){
	map <char, int> *check_string;
	int size_iterator =  strlen(original_text);
	for(int i = 0; i < size_iterator ; i++){
		cout << check_string->count(original_text[i]) << endl;
		if(check_string->count(original_text[i]) == 0){
			(*check_string)[original_text[i]] = 1;
		} else {
			int text_count = (*check_string)[original_text[i]];
			(*check_string)[original_text[i]] = text_count + 1;
		}
	}
	return check_string;
}

void show_map_value(map<char, int> *map_value){
	for(map<char, int>::iterator it = map_value->begin(); it != map_value->end(); ++it){
		cout << it->first << endl;
		cout << it->second << endl;
	}
}

bool list_excerise::check_reverse(char *original_text, char* original_text2){
	map <char, int> *check_string = check_map(original_text);
	map <char, int> *check_string2 = check_map(original_text2);

	show_map_value(check_string);
	show_map_value(check_string2);

	return true;
}

bool uniq_charactor_check(char *input_data){
	if(strlen(input_data) >= 256){
		return false;
	}
	map<char, bool> char_bool;
	for(int i = 0; i <= strlen(input_data); i++){
		if(char_bool[input_data[i]] == true){
			return false;
		}else{
			char_bool[input_data[i]] = true;
		}
	}
	return true;
}

void reverse(char *str){
	char *end = str;
	char tmp;
	if(*str){
		while(*end){
			++end;
		}
		--end;
		while(str < end){
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}

bool check_rearrange(char *original_text, char *original_text2){
	if(strlen(original_text) != strlen(original_text2)){
		return false;
	}
	vector<char> my_vector(original_text, original_text + strlen(original_text));
	sort(my_vector.begin(), my_vector.begin() + strlen(original_text));
	vector<char> my_vector2(original_text2, original_text2 + strlen(original_text2));
	sort(my_vector2.begin(), my_vector2.begin() + strlen(original_text2));
	for(int i = 0; i < my_vector.size(); i++ ){
		if(my_vector[i] != my_vector2[i]){
			return false;
		}
	}
	return true;
}

void bubble_sort(int *sort_data){
	int tmp_data = 0;
	for(int i = 0; i <= ARRAY_SIZE; ++i ){
		for(int j = ARRAY_SIZE - 1; j > i; --j){
		    if(sort_data[j] < sort_data[j - 1]){
		    	tmp_data = sort_data[j];
		    	sort_data[j] = sort_data[j - 1];
		    	sort_data[j - 1] = tmp_data;
		    }
		}
	}
}

void choose_sort(int* sort_data){
	int tmp_data = 0;
	for(int i = 0; i < ARRAY_SIZE; ++i){
		for(int j = i + 1; j < ARRAY_SIZE; ++j){
			if(sort_data[i] > sort_data[j]){
				tmp_data = sort_data[i];
				sort_data[i] = sort_data[j];
				sort_data[j] = tmp_data;
			}
		}
	}
}

void Merge(int* sort_data, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int *L = new int[n1];
	int *R = new int[n2];
	for(int i = 0; i < n1; i++){
		L[i] = sort_data[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = sort_data[mid + i];
	}
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;
	int i = 0;
	int j = 0;
	for(int k = left; k <= right-1; k++){
		if(L[i] <= R[j]){
			sort_data[k] = L[i];
			i++;
		}
		else{
			sort_data[k] = R[j];
			++j;
		}
	}
}

void Merge_sort(int* sort_data, int left, int right){
	int i, mid;
	if(left + 1 < right){
		mid = (left + right) / 2;
		Merge_sort(sort_data, left, mid);
		Merge_sort(sort_data, mid, right);
		Merge(sort_data, left, mid, right);
	}
}

void counting_sort(int *sort_data){
	int *counting_sort_array = new int[ARRAY_SIZE];

	for(int i = 0; i < ARRAY_SIZE; i++){
		counting_sort_array[i] = 0;
	}

	for(int i = 0; i < ARRAY_SIZE; i++){
		counting_sort_array[sort_data[i]]++;
	}
	int output_index = 0;
	// counting_sort_array is zero not add data
	for(int j=0;j < ARRAY_SIZE; j++){
		while(counting_sort_array[j]--){
			sort_data[output_index++] = j;
		}
	}
}

typedef int value_type;

value_type med3(value_type x, value_type y, value_type z){
	if(x < y){
		if(y < z){
			return y;
		}else if( z < x){
			return x;
		}else{
			return z;
		}
	} else if(z < y){
		if(y < x){
			return y;
		}else if( x < z){
			return x;
		}else{
			return z;
		}
	}
}

void QuickSort(value_type a[], int left, int right){

	if(left < right){
		int i = left;
		int j = right;
		value_type tmp;
		value_type pivot = med3(a[i], a[i + (j-1) / 2], a[j]);
		while(1){
			while(a[i] < pivot){
				i++;
			}
			while(pivot < a[j]){
				j--;
			}
			if(i >= j){
				break;
			}
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
		QuickSort(a, left, i -1);
		QuickSort(a, j + 1, right);
	}
}

void show_array(int *sort_data){
	for(int i = 0; i < ARRAY_SIZE; ++i ){
		cout << sort_data[i] << endl;
	}
}

int main(int argc, char *argv[]){
    char *original_text = argv[1];
    char *original_text2 = argv[2];
    if (uniq_charactor_check(original_text) == true){
    	cout << "Sucess" << endl;
    }else{
    	cout << "Failed" << endl;
    }
    reverse(original_text);
    cout << original_text << endl;
    if( check_rearrange(original_text, original_text2) == true){
    	cout << "Sucess" << endl;
    }else{
    	cout << "Failed" << endl;
    }
    int sort_data[ARRAY_SIZE] = {2, 4, 1, 5, 2, 7};
    bubble_sort(sort_data);
    cout << "bubble" << endl;
    show_array(sort_data);
    int sort_data2[ARRAY_SIZE] = {2, 4, 1, 5, 2, 7};
    choose_sort(sort_data2);
    cout << "choose" << endl;
    show_array(sort_data2);
    int sort_data3[ARRAY_SIZE] = {2, 4, 1, 5, 2, 7};
    cout << "Merge" << endl;
    Merge_sort(sort_data3, 0, ARRAY_SIZE);
    show_array(sort_data3);
    int sort_data4[ARRAY_SIZE] = {2, 4, 1, 5, 2, 7};
    cout << "Counting" << endl;
    counting_sort(sort_data4);
    show_array(sort_data4);
    int sort_data5[ARRAY_SIZE] = {2, 4, 1, 5, 2, 7};
    cout << "Quick" << endl;
    QuickSort(sort_data5, 0, ARRAY_SIZE);
    show_array(sort_data5);
	//char *original_text2 = argv[2];
	//list_excerise list_excerise_instance;
	//list_excerise_instance.check_reverse(original_text, original_text2);
	return 0;
}
