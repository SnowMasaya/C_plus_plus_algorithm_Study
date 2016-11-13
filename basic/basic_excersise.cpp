/*
 * basic_excersise.cpp
 *
 *  Created on: Nov 7, 2016
 *      Author: masayaogushi
 */

#include "basic_excersise.h"
#include "iostream"
#include "vector"
#include "cmath"
#include <math.h>
#include <complex>
#include <assert.h>
#include "Vector_excerisize.h"
using namespace std;

basic_excersise::basic_excersise() {
	// TODO Auto-generated constructor stub

}

basic_excersise::~basic_excersise() {
	// TODO Auto-generated destructor stub
}

void increment()
{
	int v[] = {0, 1, 2, 3};

	for (auto& x : v)
	{
        cout << x << endl;
	}
}

int count_x(char *p, char x)
{
	if(p==nullptr) return 0;
	int count = 0;
	for(; *p != 0; ++p)
	{
		if(*p==x)
		{
			++count;
		}
	}
	return count;
}

vector<double> vector_init(int s)
{
	vector<double> v(s);
	return v;
}

double read_and_sum(int s)
{
	vector<double> v = vector_init(s);
	for (int i = 0; i != s; ++i)
	{
		cin >> v[i];
	}
	double sum =0;
	for (int i = 0; i != s; ++i)
	{
		sum += v[i];
	}
	return sum;

}

// Don't work
//Traffic_light& operator++(Traffic_light& t)
//{
//	switch(t){
//	case Traffic_light::green:
//		return t=Traffic_light::yellow;
//	case Traffic_light::yellow:
//		return t=Traffic_light::red;
//	case Traffic_light::red:
//		return t=Traffic_light::green;
//	}
//}

double sqrt_test(double d)
{
	return sqrt(d);
}

int main(){
	//Excerise 1
	//increment();
	//Excerise 2
	//char p[] = {'x', 'y', 'z', 'x'};
	//char char_code = 'x';
	//cout << count_x(p, char_code) << endl;
	//Excerise 3
	//int read_size = 3;
	//cout << read_and_sum(read_size) << endl;
	//Excerise 4 not clear
	//Traffic_light next = ++light;
	//Excerise 5
	//cout << sqrt_test(4) << endl;
	//Excerise 6
	Vector_excerisize vector_excerisize_instance(4);
	cout << vector_excerisize_instance.operator[](2) << endl;
	cout << vector_excerisize_instance.operator[](10) << endl;
	Vector_excerisize vector_excerisize_instance2(-4);
    int * a = NULL;
    assert(a == NULL);
	return 0;
}
