#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <limits>
#include <fstream>
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