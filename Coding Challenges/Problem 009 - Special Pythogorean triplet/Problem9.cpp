/*

LINK: https://projecteuler.net/problem=9

PROBLEM:  Special Pythagorean triplet

Statement:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

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

int isTriple(int a, int b, int c) {
	return a*a + b*b == c*c;
}

int isFactor(int m, int n) {
	return m%n == 0;
}

int main() {
	bool flag = false;
	int A = 0, B = 0, C = 0;
	for (int a = 1; a < 500; a++) {
		if (flag)
			break;
		for (int b = 1; b < 500; b++) {
			if (flag) 
				break;
			for (int c = 1; c < 500; c++) {
				if (isTriple(a, b, c)) {
					if (isFactor(1000, a + b + c)) {
						A = a; B = b; C = c;
						flag = true;
						break;
					}
				}
			}
		}
	}

	int f = 1000 / (A + B + C);
	uint64_t myProd = (A*f)*(B*f)*(C*f);
	cout << myProd << endl;
	system("pause");
	return 0;
}

