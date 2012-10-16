#include "includers.h"
#include <iostream>

using namespace std;

bool isItInt(int choice){
	//Will validate integer
	if(!(choice)){
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "invalid input.\n";
		Sleep(2000);
		system("cls");
		return false;
	}
	return true;
}