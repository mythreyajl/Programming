#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include "QuickSort.h"

int main() {    
    std::string path = "QuickSort.txt";
    
    quickSort* obj = new quickSort( path, 1 );
    unsigned int retVal = obj->computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons first as pivot: "<< retVal << std::endl;    

    obj = new quickSort( path, 2 );
    retVal = obj->computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons last as pivot: "<< retVal << std::endl;   

    obj = new quickSort( path, 3 );
    retVal = obj->computeQuickSortNumComparisons( );
    std::cout << "Number of comparisons middle as pivot: "<< retVal << std::endl;  
    delete obj;
    obj = NULL;

    system("pause");
    return 0;
}
