/* Problem 2: Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/
#include <iostream>
#include <math.h>

bool isPrime( int number )
{
    if( number == 1 )
	return false;

    if( number == 2 )
	return true;

    for( int i = 2; i < number; i++ ) 
    	if( number%i == 0 )
	    return false;
    return true;
}


int main() 
{
    unsigned long long num = 600851475143;
    unsigned long long numCopy = num;
    int count = 2;
    int maxPrime = 2;
    while( numCopy != 1 ) {
 	bool flag = true;
    	while( numCopy%count == 0 ) {
	    if( maxPrime < count && isPrime(count) && flag == true ) {
            	maxPrime = count;
 		std::cout << count << std::endl;
 		flag = false;
            }
	    numCopy /= count;
	}
	count++;
    }
    
    std::cout << "The highest prime factor of " << num << "= " << maxPrime << "." << std::endl; 	
    
    std::cin.get();
    return 0;
}
