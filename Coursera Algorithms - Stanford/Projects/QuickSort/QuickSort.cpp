#include "QuickSort.h"

quickSort::quickSort() { }

quickSort::quickSort( std::string path, int pivotChoiceInt ) 
{ 
    std::fstream fp( path, std::ios_base::in ); 
    int countSize = 0, currentVal = 0;
    while( fp >> currentVal )
    {
        setValue( countSize, currentVal );
        countSize++;
    }
    setLength( countSize );

    if( pivotChoiceInt == 1 )
        PIVOT_RULE = FIRST;
    else if( pivotChoiceInt == 2 )
        PIVOT_RULE = LAST;
    else if( pivotChoiceInt == 3 )
        PIVOT_RULE = MIDDLE;
    else
        PIVOT_RULE = FIRST;
}

quickSort::~quickSort( ) { }

int
quickSort::getValue( int index )
{
    return this->Arr[ index ];
}

void
quickSort::setValue( int index, int value )
{
    this->Arr[ index ] = value;
}

void
quickSort::setLength( int length )
{
    this->length = length;
}

int
quickSort::getLength( )
{
    return this->length;
}

unsigned int 
quickSort::computeQuickSortNumComparisons(  ) 
{
    return computeQuickSortNumComparisons( 0, getLength( ) );
}

unsigned int 
quickSort::computeQuickSortNumComparisons( int start, int end ) 
{
    if( start == end - 1 )
        return 0;

    int pivot = findPivotPosition( start, end );    
    swap( pivot, start );

    // BODY OF QUICKSORT
    int pointLesser = start+1;
    int currentPoint = start+1;

    while( currentPoint < end )
    {
        if( getValue( currentPoint ) < getValue( start ) )
        {
            swap( currentPoint, pointLesser );
            pointLesser++;
        }
        currentPoint++;
    }
    int C = end-start-1;
    swap( pointLesser-1, start );
    

    int A = computeQuickSortNumComparisons( start, pointLesser );
    int B = 0;

    if( pointLesser < end )
         B = computeQuickSortNumComparisons( pointLesser+1, end );

    return A+B+C;
}

void
quickSort::swap( int pos1, int pos2 )
{
    int temp = getValue( pos1 );
    setValue( pos1, getValue( pos2 ) );
    setValue( pos2, temp );
}

int
quickSort::findPivotPosition( int start, int end )
{
    if( start == end-1 )
        return start;

    if( PIVOT_RULE == FIRST )
        return start;
    else if( PIVOT_RULE == LAST )
        return end-1;
    else if( PIVOT_RULE == MIDDLE )
    {
         int mid = getValue( (int) (start+end)/2 );
         int first = getValue( start );
         int last = getValue( end-1 );

         if( ( mid > first && mid < last ) || ( mid > last && mid < first ) )
             return (start+end)/2; 
         else if( ( last > first && last < mid ) || ( last > mid && last < first ) ) 
             return end-1;
         else if( ( first > last && first < mid )|| ( first > mid && first < last ) )
             return start; 
    }
}
