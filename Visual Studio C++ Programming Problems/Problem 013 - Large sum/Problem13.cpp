/*
https://projecteuler.net/problem=13

PROBLEM: Large sum

Statement:
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers(see link): https://projecteuler.net/problem=13

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "fiftyNumber.h"

using namespace std;

int main(){ 
	vector<fiftyNumber*> numbers;
	fiftyNumber accumulator(50, 10);
	ifstream input("Data.txt");
	string line;
	if (input.is_open()) {
		while (!input.eof()) {
			getline(input, line);
			fiftyNumber* impl = new fiftyNumber(50, 10);
			for (int i = 0; i < line.length; i++)
				
		}
	}

	cout << endl;
	system("pause");
	return 0;
}