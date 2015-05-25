#include "Hand.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

Rank findRank( char input );
Suit findSuit( char input );

static int P1Wins;
static int P2Wins;
static void countWins( int P1Win );

Hand::Hand( std::string inputText )
{
    std::istringstream ss( inputText);
    int count = 1;
    while (!ss.eof())         
    {
        std::string x;               
        getline( ss, x, ' ' );  
        switch( count )
        {
        case 1:
            P1.one.rank = findRank( x.at(0) );
            P1.one.suit = findSuit( x.at(1) );
            break;
        case 2:
            P1.two.rank = findRank( x.at(0) );
            P1.two.suit = findSuit( x.at(1) );
            break;
        case 3:
            P1.three.rank = findRank( x.at(0) );
            P1.three.suit = findSuit( x.at(1) );
            break;
        case 4:
            P1.four.rank = findRank( x.at(0) );
            P1.four.suit = findSuit( x.at(1) );
            break;
        case 5:
            P1.five.rank = findRank( x.at(0) );
            P1.five.suit = findSuit( x.at(1) );
            break;
        case 6:
            P2.one.rank = findRank( x.at(0) );
            P2.one.suit = findSuit( x.at(1) );
            break;
        case 7:
            P2.two.rank = findRank( x.at(0) );
            P2.two.suit = findSuit( x.at(1) );
            break;
        case 8:
            P2.three.rank = findRank( x.at(0) );
            P2.three.suit = findSuit( x.at(1) );
            break;
        case 9:
            P2.four.rank = findRank( x.at(0) );
            P2.four.suit = findSuit( x.at(1) );
            break;
        case 10:
            P2.five.rank = findRank( x.at(0) );
            P2.five.suit = findSuit( x.at(1) );
            break;
        }
        count++;   
    }

    findWinner();
}

void
Hand::findWinner()
{
    P1.status = findHandStatus( P1 );
    P2.status = findHandStatus( P2 );
    if( P1.status < P2.status )
        countWins( 1 );
    else
        countWins( 0 );
}

HandStatus
Hand::findHandStatus( Player player )
{

      
}

void
Hand::countWins( int P1Win )
{
    if( P1Win )
        P1Wins++;
    else
        P2Wins++;
}

Rank findRank( char input )
{
    switch( input )
    {
    case '2':
        return TWO;
        break;
    case '3':
        return THREE;
        break;
    case '4':
        return FOUR;
        break;
    case '5':
        return FIVE;
        break;
    case '6':
        return SIX;
        break;
    case '7':
        return SEVEN;
        break;
    case '8':
        return EIGHT;
        break;
    case '9':
        return NINE;
        break;
    case 'T':
        return TEN;
        break;
    case 'J':
        return JACK;
        break;
    case 'Q':
        return QUEEN;
        break;
    case 'K':
        return KING;
        break;
    case 'A':
        return ACE;
        break;
    }
}

Suit findSuit( char input )
{
    switch( input )
    {
    case 'S':
        return SPADE;
        break;
    case 'D':
        return DIAMOND;
        break;
    case 'H':
        return HEART;
        break;
    case 'C':
        return CLUB;
        break;
    }
}