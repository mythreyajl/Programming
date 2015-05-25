#include "number.h"


int number::sumCarry[3];
number::Number number::sum;

number::number( std::string textNumber )
{
    for (int i=0; i<textNumber.length(); ++i)
        num.data[ i ] = textNumber.at( 49-i ) - 48;

    updateSum(num);
}

void
number::updateSum( Number newNumber )
{
    int carry = 0;
    for( int i=0; i<50; i++ )
    {
        sum.data[ i ] += newNumber.data[ i ] + carry ;
        if( sum.data[ i ] > 9 )
        {
            int tempSum = sum.data[ i ];
            sum.data[ i ] = tempSum%10;
            carry = tempSum / 10;
        }
        else
            carry = 0;
    }
    if( carry > 0 )
    {
        sumCarry[ 0 ] += carry;
        if( sumCarry[ 0 ] > 9 )
        {
            int tempSum = sumCarry[ 0 ];
            sumCarry[ 0 ] = tempSum%10;
            sumCarry[ 1 ] += tempSum/10;
            if( sumCarry[ 1 ] > 9 )
            {   
                int tempSum = sumCarry[ 1 ];
                sumCarry[ 1 ] = tempSum%10;
                sumCarry[ 2 ] += tempSum/10;
            }
        }
    }
}


int
number::getDigit( int digitPosition )
{
    if( digitPosition < 50 && digitPosition >= 0 )
        return num.data[ digitPosition ];
    else
        std::cout << "Enter a valid position: between 0 and 49" << std::endl;
}

void
number::setDigit( int digitPosition, int value )
{
    if( digitPosition < 50 && digitPosition >= 0 ) 
        num.data[ digitPosition ] = value;
    else
        std::cout << "Enter a valid position: between 0 and 49" << std::endl;
}

