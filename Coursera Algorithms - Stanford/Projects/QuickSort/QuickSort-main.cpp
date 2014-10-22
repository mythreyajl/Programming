#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include "QuickSort.h"

int main() {    
    std::string path = "QuickSortTest1.txt";
    
    
    quickSort obj1( path, 1 );
    unsigned int retVal = obj1.computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons first as pivot: "<< retVal << std::endl;


   /* quickSort obj2( path, 2 ); 
    retVal = obj2.computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons last as pivot: "<< retVal << std::endl;
    delete& obj2;

    quickSort obj3( path, 3 ); 
    retVal = obj3.computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons median of middle: "<< retVal << std::endl;
    delete& obj3;*/

    system("pause");
    return 0;
}
