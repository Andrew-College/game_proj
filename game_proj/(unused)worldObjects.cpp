//#include "worldObjects.h"
#include "includers.h"
#include <iostream>
using namespace std;
worldOb::worldOb()
{
	mName = "OutofBounds";
	mrepresBy = 'H';
	mx_pos = 0;
	my_pos = 0;
};
worldOb::worldOb(string name, char represBy, int x_pos, int y_pos)
{
	mName = name;
	mrepresBy = represBy;
	mx_pos = x_pos;
	my_pos = y_pos;
};
void worldOb::print()
{
	cout << "Name; " << mName << endl;
	cout << "Character representer; " << mrepresBy << endl;
};

void load(ifstream& inFile){

	string garbage;
	inFile >> garbage >> mName;
	inFile >> garbage >> mHitPoints;
	inFile >> garbage >> mMagicPoints;
	inFile >> garbage >> mArmour;

};