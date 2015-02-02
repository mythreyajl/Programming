#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include "Inversions.h"

int main() {    
    std::string path = "IntegerArray2.txt";
    inversionsMerge obj( path );
    unsigned int retVal = obj.countInversions();
    std::cout << "Number of inversions: "<< retVal << std::endl;
    system("pause");
    return 0;
}
