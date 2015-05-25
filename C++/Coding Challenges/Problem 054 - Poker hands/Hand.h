#include <iostream>
#include <stdio.h>

enum Suit { SPADE = 1, HEART = 2, DIAMOND = 3, CLUB = 4 };
enum Rank { TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, \
            SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, \
            TEN = 10, JACK = 11, QUEEN = 12, KING = 13, ACE = 14 };
enum HandStatus { ROYALFLUSH = 1, STRAIGHTFLUSH = 2, FOUROFAKIND = 3,  \
                  FULLHOUSE = 4, FLUSH = 5, STRAIGHT = 6, THREEOFAKIND = 7, \
                  TWOPAIRS = 8, ONEPAIR = 9, HIGHCARD = 10 };

struct Card
{
   Suit suit;  
   Rank rank;
};

class Hand
{
public:
    struct Player
    {
        Card one;
        Card two;
        Card three;
        Card four;
        Card five;
        HandStatus status;
    };

    static int P1Wins;
    static int P2Wins;
    static void countWins( int  );
    Hand( std::string inputText );
    void findWinner( void );
    HandStatus findHandStatus( Player player );

private:
    Player P1, P2;

};