//pre-compile Includes
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
//namespace section
using namespace std;
//declaring variables
int main_menu();
int welcome();
int highScore();
int highScore_score;
vector <int> score;

///////////////////////////////////////////
//All the method names are human-readable//
///////////////////////////////////////////

//The main part, the bit that calls everything
int main(){
	main_menu();
	return 0;
}

int main_menu(){
	int choice = 0;
	bool end = false;
	welcome();
	cout << "MINI GOLF MANIA" << endl << endl;
	cout << "Main Menu" << endl << "1. How to play." << endl << "2. Play Now!" << endl <<"3. High Scores." << endl <<"4. Quit"<<endl<<endl;
	cin >> choice;
	do{
		switch (choice){
		case 1:
			tutorial();
			break;
		case 2:
			game();
			break;
		case 3:
			highScore();
			break;
		}
	}while(choice != 4);
	return 0;
}
int welcome(/*Say hello to the nice people*/){
	system("Color 0C");
	cout << "WELCOME TO MINI GOLF MANIA"<<endl<<endl;
	system("Color 0F");
	Sleep(1000);
	cout << "Play smart!"<< endl;
	Sleep(1000);
	cout <<"Win low!"<<endl;
	Sleep(4000);
	system("cls");
	Sleep(500);
	return 0;
}

int highScore(){
}