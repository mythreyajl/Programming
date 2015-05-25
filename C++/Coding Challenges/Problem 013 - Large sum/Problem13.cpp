/*
https://projecteuler.net/problem=13

PROBLEM: Large sum

Statement:
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers(see link): https://projecteuler.net/problem=13

Author:
Mythreya Jayendra Lakshman

*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include "number.h"
#include <vector>

int main() 
{
    std::ifstream numberFile("Data.txt");
    std::vector<number> numberList;
    
    for( std::string line; getline( numberFile, line ); )
    {
        number newNum(line);
        numberList.push_back(newNum);
    }
    
    if( number::sumCarry[2] )
        std::cout << number::sumCarry[2] << number::sumCarry[1] << number::sumCarry[0];
    else 
    {
        if( number::sumCarry[1] )
            std::cout << number::sumCarry[1] << number::sumCarry[0];
        else
        {
            if( number::sumCarry[1] )
                std::cout << number::sumCarry[0]; 
        }
    }
    for( int i=0; i<50; i++)
        std::cout << number::sum.data[ 49 - i ];

    std::cout << "Done parsing strings" << std::endl;
    return 0;

}