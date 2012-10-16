#include "includers.h"
using namespace std;
#ifndef SCORE_H
#define SCORE_H
class score
{
public:
	score();
	score(string name, string level, int score);
	void save(ofstream& outfile);
	void load(ifstream& infile);
private:
	string mName;
	string mLevel;
	int mScore;
}
#endif