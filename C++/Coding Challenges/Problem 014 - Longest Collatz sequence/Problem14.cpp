/*

LINK: https://projecteuler.net/problem=14

PROBLEM: Longest Collatz sequence

Statement: 
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

Author:
Mythreya Jayendra Lakshman

*/

#include <inttypes.h>
#include <iostream>
#include <stdio.h>


int main() 
{
    uint64_t num = 1;
    uint64_t maxSize = 0;
    uint64_t index = 1;
    while (num < 1000000)
    {
        uint64_t numCopy = num;
        uint64_t size = 1;
        while(numCopy != 1)
        {
            if( numCopy%2 == 0 )
                numCopy /= 2;
            else
                numCopy = 3*numCopy + 1;
            size++;
        }
        if( size > maxSize )
        {
            maxSize = size;
            index = num;
        }

        num++;
    }
    std::cout << "The number: " << index;
    return 0;
}