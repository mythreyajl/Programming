#ifndef __INVERSIONS_H__
#define __INVERSIONS_H__

#include <iostream>
#include <fstream>
#include <cstdio>

class inversionsMerge {

private:
    int Arr[200000];
    int length;

public:
    // Constructors and Destructors
    inversionsMerge( );
    inversionsMerge( std::string path );    
    ~inversionsMerge( );

    // Usual data accessors
    int getValue(int index);
    void setValue(int index, int value);
    void setLength(int length);
    int getLength( );
    void printArray();
    
    // Inversion-specific methods
    unsigned int countInversions();
    unsigned int mergeSortReturnInversions();
    unsigned int mergeSortReturnInversions(int start, int end);
    unsigned int mergeReturnInversions(int start, int mid, int end);
   
};

#endif // __INVERSIONS_H__
