/*
LINK: https://projecteuler.net/problem=15

PROBLEM: Lattice paths

Statement:
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
See Image: https://projecteuler.net/problem=15
How many such routes are there through a 20×20 grid?


Author:
Mythreya Jayendra Lakshman
*/

#include <inttypes.h>
#include <iostream>

uint64_t factorial( int num )
{
    uint64_t out = num*factorial(num-1);
    return out;
}


int main() 
{
    std::cout << factorial(40)/(factorial(20)*factorial(20));
    return 0;
}