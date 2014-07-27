/*

LINK: https://projecteuler.net/problem=5

PROBLEM:  Smallest multiple

Statement:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>

using namespace std;

bool isFactor(uint64_t m, uint64_t n) { return m%n==0; }

uint64_t gcd(uint64_t a, uint64_t b) {
    uint64_t minimum = min(a, b);
    uint64_t maximum = a + b - min(a, b);
    uint64_t sqr = (uint64_t)floor(sqrt(minimum));
    uint64_t gcd = 0;
    for (int i = 1; i <= minimum; i++) {
        if (isFactor(minimum, i)) {
            if (isFactor(maximum, i))
                gcd = i;
        }
    }
    return gcd;
}

uint64_t lcm(uint64_t a, uint64_t b) {
    return (a*b / gcd(a, b));
}
int main() {
    uint64_t smallestProd = 1;
    for (int i = 1; i <= 20; i++)
        smallestProd = lcm(smallestProd, i);
    cout << "The smallest prod: " << smallestProd << endl;
    system("pause");
    return 0;
}

