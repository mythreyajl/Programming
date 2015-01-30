#include "Inversions.h"
#include <iostream>
#include <fstream>

inversionsMerge::inversionsMerge( ){ }

inversionsMerge::inversionsMerge( std::string path )
{
    std::fstream fp( path, std::ios_base::in );  
    int positionCounter = 0;
    int currentVal;
    while ( fp >> currentVal )
    {
        setValue( positionCounter, currentVal );
        ++positionCounter;
    }
    fp.close();
    setLength( positionCounter );
}

void 
inversionsMerge::setLength(int length)
{
    this->length = length;
}
 
int 
inversionsMerge::getLength( )
{
    return this->length;
}

inversionsMerge::~inversionsMerge( ) { }

int
inversionsMerge::getValue(int index) 
{
    return *( Arr + index );
}


void
inversionsMerge::setValue( int index, 
                           int value) 
{
    *( Arr + index ) = value;
}

unsigned int
inversionsMerge::countInversions() 
{
    return mergeSortReturnInversions();
}

unsigned int
inversionsMerge::mergeSortReturnInversions()
{
    return mergeSortReturnInversions( 0, getLength( ) );
}

unsigned int
inversionsMerge::mergeSortReturnInversions(int start, int end)
{
    if ( start == end - 1)
        return 0;

    int mid = start + ( end - start + 1 )/2 ;
    unsigned int A = mergeSortReturnInversions(start, mid);
    unsigned int B = mergeSortReturnInversions(mid, end);
    unsigned int C = mergeReturnInversions(start, mid, end);
    return A + B + C;
}

unsigned int
inversionsMerge::mergeReturnInversions(int start, int mid, int end)
{
    int i = start, j = mid;
    int * tempArr = new int[end - start];
    unsigned int count = 0, countInversions = 0;
    
    while( count < end-start )
    {
        if( i < mid && j < end )
        {
            if( getValue( i ) <= getValue( j ) )
            {
                tempArr[ count ] = getValue( i );
                ++i; 
            }
            else 
            {
                tempArr[ count ] = getValue( j );
                countInversions += mid - i;
                ++j;
            }
        }
        else if( i == mid )
        {
            tempArr[ count ] = getValue( j );
            ++j;            
        }
        else
        {
            tempArr[ count ] = getValue( i );
            ++i;          
        }
        ++count;
    }

    for(int i=start; i<end; ++i)
    {
        setValue( i, tempArr[ i - start ] );
    }

    delete[] tempArr;
    return countInversions;

}

void
inversionsMerge::printArray()
{
    for( int i = 0; i < getLength( ); ++i )
        std::cout << getValue( i ) << " ";
    
    std::cout << std::endl;
}
