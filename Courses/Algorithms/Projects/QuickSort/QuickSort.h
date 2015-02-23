#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

#include <iostream>
#include <fstream>
#include <cstdio>

class quickSort 
{

private:
    int Arr[200000];
    int length;

public:
    // Constructors and Destructors
    quickSort( );
    quickSort( std::string path, int pivotChoiceInt );    
    ~quickSort( );

    // Usual data accessors
    int getValue( int index );
    void setValue( int index, int value );
    void setLength( int length );
    int getLength( );
    void printArray( );

    // Quicksort-specific methods
    enum pivotRule
    {
        FIRST = 1,
        LAST = 2,
        MIDDLE = 3
    };
    pivotRule PIVOT_RULE;

    unsigned int computeQuickSortNumComparisons(  );
    unsigned int computeQuickSortNumComparisons( int start, int end );
    int findPivotPosition( int start, int end );
    void swap( int pos1, int pos2 );
};

#endif // __QUICKSORT_H__