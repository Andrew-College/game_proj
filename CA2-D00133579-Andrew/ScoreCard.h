#ifndef SCORECARD_H
#define SCORECARD_H

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <limits>
#include <fstream>
#include <string>

using namespace std;

class ScoreCard{
private:
	int mScore;
	string mMapName, mName;

public:
	ScoreCard();
	void setName(string input);
	void setMapName(string input);
	void setScore(int input);
	void print();
};
#endif