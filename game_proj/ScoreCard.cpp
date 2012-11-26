#include "ScoreCard.h"


	ScoreCard scorecard(){
		
	}
	void ScoreCard::setName(string input){
		this->mName = input;
	}
	void ScoreCard::setMapName(string input){
		this->mMapName = input;
	}
	void ScoreCard::setScore(int input){
		this->mScore = input;
	}

	void ScoreCard::print(){
		cout << this->mName << "\t\t\t" << this->mMapName << "\t\t\t" << this->mScore;
	}