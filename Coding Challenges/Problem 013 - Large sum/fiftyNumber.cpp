#include "fiftyNumber.h"


fiftyNumber::fiftyNumber()
{
	for (int i = 0; i < 50; i++)
		fiftyDigitNumber.push_back(0);

	for (int i = 0; i < 10; i++)
		carry.push_back(0);
}


fiftyNumber::fiftyNumber(int size)
{
	for (int i = 0; i < size; i++)
		fiftyDigitNumber.push_back(0);

	for (int i = 0; i < 10; i++)
		carry.push_back(0);
}

fiftyNumber::fiftyNumber(int size, int carrySize)
{
	for (int i = 0; i < size; i++)
		fiftyDigitNumber.push_back(0);

	for (int i = 0; i < carrySize; i++)
		carry.push_back(0);
}

fiftyNumber::~fiftyNumber()
{
	vector<int>* fiftyDigitNumber = new vector<int>();
	delete fiftyDigitNumber;
	vector<int>* carry = new vector<int>();
	delete carry;
}

int fiftyNumber::getDigit(int position) 
{
	return fiftyDigitNumber.at(position);
}

bool fiftyNumber::setDigit(int position, int value)
{
	if ( position < fiftyDigitNumber.size() )
		fiftyDigitNumber.at(position) = value;
	else return false;
	return true;
}

fiftyNumber fiftyNumber::addNumber(fiftyNumber B) {
	return *this; 
}