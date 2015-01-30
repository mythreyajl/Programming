/*

LINK: https://projecteuler.net/problem=4

PROBLEM:  Largest palindrome product

Statement:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

Author:
Mythreya Jayendra Lakshman

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>

using namespace std;

string convert_to_string(int);
bool isPalindrome( int );

int main() {
    int largestPalindrome = 0;

    for( int i = 100; i < 1000; i++ ) {
        for (int j = 100; j < 1000; j++ ) {
            if ( isPalindrome( i*j ) )
                largestPalindrome = max(largestPalindrome, i*j);
        }
    }

    cout << "The largest palindrome is: " << largestPalindrome << endl;
    system("pause");
    return 0;
}

string convert_to_string( int n ) {
    string num;
    int remains = 0;
    while( n>0 ) {
        remains = n % 10;
        n = n / 10;
        num += 48 + remains; //adding ascii value of number 
    } 
    return num;
}

bool isPalindrome(int num) {
    string number = convert_to_string(num);
    unsigned int i = 0;
    while(i <= number.length() / 2) {
        if( number.at( i ) == number.at( number.length() - i-1 ) )
            i++;
        else
            return false;
    }
    return true;
}