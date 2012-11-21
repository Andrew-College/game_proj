#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <limits>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>

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
bool isItString(string choice){
	//Will validate integer
	if(std::string::npos != choice.find(choice.substr())){
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "invalid input.\n";
		Sleep(2000);
		system("cls");
		return false;
	}
	return true;
}
int exists(string name){
	string currentLine = "";
	ifstream myfile ("passwd");
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline(myfile,currentLine);
			if(currentLine.find(name)){
				return currentLine.find(currentLine.find(name));
			}
		}
	}
	return -1;
}
bool password(string name, int passwd){
	int count = 0;
	string currentLine = "";
	if(exists(name) != -1 && isItInt(passwd)){
		currentLine = "";
		ifstream myfile ("passwd");
		if (myfile.is_open())
		{
			while ( myfile.good() )
			{
				if(exists(name)==count){
					getline (myfile,currentLine);
				}
			}
		}
		return true;
	}
	return false;
}