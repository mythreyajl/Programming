/*

LINK: https://projecteuler.net/problem=16

PROBLEM: Power digit sum

Statement: 
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

Author:
Mythreya Jayendra Lakshman

*/

#include <inttypes.h>
#include <iostream>

int sumOfDigits( int base, int power)
{
    int sum = 0;
    int arrayNum[1000];

    for( int i=0;i<1000; i++ )
        arrayNum[i] = 0;

    arrayNum[0] = base;
    while(power > 1)
    {
        int carryIn = 0;
        int pos = 0;
        while(pos<1000)
        {
            arrayNum[pos] = arrayNum[pos] * base + carryIn;
            if( arrayNum[pos] > 9 ) 
            {
                int temp = arrayNum[pos];
                arrayNum[pos] = temp%10;
                carryIn = temp/10;
            }          
            else
                carryIn = 0;
            pos++;
        }
        power--;
    }
    for( int i=0; i<1000; i++ )
    {
        sum += arrayNum[i];
    }
    return sum;
}

int main()
{
    std::cout << "The answer is " << sumOfDigits(2,1000) << std::endl;
    return 0;
}