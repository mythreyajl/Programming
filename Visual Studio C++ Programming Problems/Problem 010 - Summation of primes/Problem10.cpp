/*

LINK: https://projecteuler.net/problem=10

PROBLEM:  Summation of primes

Statement:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>
#include<iostream>
#include<fstream>

using namespace std;

bool isPrime(uint64_t n) {
	if (n == 1)
		return false;
	else if (n == 2)
		return true;
	else {
		uint64_t sqr = floor(sqrt(n));
		for (uint64_t i = 2; i <= sqr; i++) {
			if (n%i == 0)
				return false;
			else
				continue;
		}
	}
	return true;
}

int main() {
	uint64_t sumPrimes = 0;
	for (uint64_t i = 0; i < 2000000; i++) {
		if (isPrime(i))
			sumPrimes += i;
	}
	cout << sumPrimes << endl;
	system("pause");
	return 0;
}

