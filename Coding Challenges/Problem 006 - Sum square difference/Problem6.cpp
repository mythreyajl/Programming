/*

LINK: https://projecteuler.net/problem=6

PROBLEM:  Sum square difference

Statement:
The sum of the squares of the first ten natural numbers is 385
The square of the sum of the first ten natural numbers is 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>

using namespace std;


int main() {
    uint64_t n = 100;
    uint64_t ssd = ((n*(n + 1) / 2) * (n*(n + 1) / 2) ) - (n*(n + 1)*(2 * n + 1) / 6);
    cout << "Sum of suqare differences: " << ssd << endl;
    system("pause");
    return 0;
}

