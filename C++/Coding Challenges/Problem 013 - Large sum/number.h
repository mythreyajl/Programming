#include <iostream>

class number 
{
public:

    struct numberContainer
    {
        int data[50];
    };
    
    typedef numberContainer Number;

    static Number sum;
    static int sumCarry[3];

    // Methods
    number( std::string textNumber );
    static void updateSum( Number newNumber );
    int getDigit( int digitPosition );
    void setDigit( int digitPosition, int value );

protected:
    Number num;
};
