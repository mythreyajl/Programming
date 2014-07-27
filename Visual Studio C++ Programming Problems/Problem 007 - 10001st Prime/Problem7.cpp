/*

LINK: https://projecteuler.net/problem=7

PROBLEM:  10001st prime

Statement:
Published on 28 December 2001 at 06:00 pm[Server Time]
By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number ?

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>

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
    int ct = 0;
    uint64_t num = 0;
    while(ct < 10001) {
        num += 1;
        if (isPrime(num))
            ct += 1;
    }
    cout << "The 10001st prime is: " << num <<endl;
    system("pause");
    return 0;
}

