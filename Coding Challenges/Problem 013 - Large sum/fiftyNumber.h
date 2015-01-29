#pragma once
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm> 
#include <inttypes.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class fiftyNumber
{
private:
	vector<int> fiftyDigitNumber[50];
	vector<int> carry;
public: 
	fiftyNumber();
	fiftyNumber(int);
	fiftyNumber(int,int);
	~fiftyNumber();
	bool setDigit(int, int);
	int getDigit(int);
	fiftyNumber addNumber(fiftyNumber);
};


