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

	int mScore;
	string mMapName, mName;

public:
	scorecard();
	scorecard(iName, iMapName, iScore);
	void setName(string input);
	void setMapName(string input);
	void setScore(int input);

};
#endif