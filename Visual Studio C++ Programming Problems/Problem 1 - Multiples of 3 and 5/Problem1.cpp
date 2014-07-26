/* 

PROBLEM: Multiples of 3 and 5

Statement: 
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0)   // test for multiple of 3 or 5
            sum += i;                   // accumulator
    }
    cout << "The expected sum is: " << sum << endl; 
    system("pause");
    return 0;
}