/*
 * excerise.cpp
 *
 *  Created on: Nov 25, 2016
 *      Author: masayaogushi
 */

#include "excerise.h"
#include <iostream>
using namespace std;

template <typename Type> excerise<Type>::excerise() {
	// TODO Auto-generated constructor stub

}

template <typename Type> excerise<Type>::~excerise() {
	// TODO Auto-generated destructor stub
}

template <typename Type> short excerise<Type>::CountBits(Type x) {
	short numbits = 0;
	while(x) {
		numbits += x & 1;
		x >>= 1;
	}
	return numbits;
}

short Parity(unsigned long x) {
	// ^ means xor for each bit
	short result = 0;
	while(x) {
		result ^= 1;
		x &= ( x - 1);
	}
	return result;
}

short Parity_extends(unsigned long x) {
	/*
	 * Example:
	 *     11011110 = 11011110 xor 1101
	 *     0011 =
	 */
	x ^= x >> 32;
	x ^= x >> 16;
	x ^= x >> 8;
	x ^= x >> 4;
	x ^= x >> 2;
	x ^= x >> 1;
	return x & 0x1;
}

long SwapBits(long x, int i, int j) {
	if(((x >> i) & 1) != ((x >> j) & 1)) {
		unsigned long bit_mask = (1L << i) | (1L << j);
		x ^= bit_mask;
	}
	return x;
}

long ReverseBits(long x){
	const int kWordSize = 16;
	const int kBitMask = 0xFFFF;
}

int main(){

	unsigned int x = 5;
	unsigned int y;
	excerise<unsigned> *excerise_instance = new excerise<unsigned>();
	y = excerise_instance->CountBits(x);
	cout << y << endl;
	cout << Parity(6) << endl;
	cout << Parity_extends(109) << endl;
	return 0;
}
