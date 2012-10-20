#include "scoreCard.h"
#include "includers.h"
#include <iostream>

using namespace std;

ScoreCard::scoreCard()
{
	mName = "";
	mFileName = "";
	mScore = 0;
}

ScoreCard::scoreCard(string name, string file, int score)
{
	mName = name;
	mFileName = file;
	mScore = score;
}
void ScoreCard::load(ifstream& inputFile)
{
	string temporaryCache;
	inputFile  >> temporaryCache >> mName;
	inputFile  >> temporaryCache >> mFileName;
	inputFile  >> temporaryCache >> mScore;
}
void ScoreCard::save(ofstream& outputFile)
{
	outputFile << mName << endl;
	outputFile << mFileName << endl;
	outputFile << mScore << endl;
	outputFile << endl;
}
void ScoreCard::print()
{
	cout << mName << "     " << mFileName << "     " << mScore << endl;
}