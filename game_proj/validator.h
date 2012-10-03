#include "includers.h"

using namespace std;
bool isItInt(){
	//Will validate integer
	int choice;
	if(!(cin >> choice)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max, '\n');
		cout << "invalid input.";
		Sleep(2000);
		system("cls");
		//cout << prompt;
		return false;
	}
	return true;
}