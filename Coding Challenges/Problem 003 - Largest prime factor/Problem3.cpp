/*

LINK: https://projecteuler.net/problem=3

PROBLEM:  Even Fibonacci numbers

Statement:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>

using namespace std;

bool isFactor( uint64_t n, uint64_t m ) {
    return n%m==0;
}

bool isPrime( uint64_t n ) {
    if( n == 1 )
        return false;
    else if( n == 2 )
        return true;
    else {
        uint64_t sqr = floor( sqrt( n ) );
        for( uint64_t i = 2; i <= sqr; i++ ) {
            if( n%i == 0 )
                return false;
            else
                continue;
        }
    }
    return true;
}

int main() {
    uint64_t n = 600851475143;
    uint64_t largestPrime = 0;
    uint64_t sqr = (uint64_t) floor(sqrt(n));

    for( uint64_t i = 2; i <= sqr; ++i ) {
        if( isFactor( n, i ) ) {
            //cout << largestPrime << endl;
            if( isPrime(i) ) 
                largestPrime = max( largestPrime, i );

            if( isPrime( n / i ) )
                largestPrime = max( largestPrime, n / i );

        }
    }

    cout << "The largest prime factor of " << n << " is: " << largestPrime << endl;
    system("pause");
    return 0;
}