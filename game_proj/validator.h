#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <limits>
#include <fstream>
#include <sstream>
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
bool exists(string name, int pass){
	std::stringstream out;
	out << pass;
	string currentLine = "";
	ifstream myfile ("login");
	string comp = name + "." + out.str();
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline(myfile,currentLine);
			if(currentLine.find(comp)){
				return (currentLine.find(comp))?true:false;
			}

		}
	}
	return -1;
}
//bool password(string name, int passwd){
//	int count = 0;
//	string currentLine = "";
//	if(exists(name) != -1 && isItInt(passwd)){
//		currentLine = "";
//		ifstream myfile ("login");
//		if (myfile.is_open())
//		{
//			while ( myfile.good() )
//			{
//				getline (myfile,currentLine);
//				if(exists(name)==count){
//					std::stringstream out;
//					out << passwd;
//					if((string)currentLine.substr(currentLine.find(".")+1, (int)currentLine.length()) == out.str()){
//						return true;
//					}
//				}
//			}
//			myfile.close();
//		}
//	}
//	return false;
//}