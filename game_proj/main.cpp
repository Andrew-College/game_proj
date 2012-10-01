//pre-compile Includes
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <ctype.h>

//namespace section
using namespace std;
//declaring variables
int main_menu();
int welcome();
void tutorial();
int highScore();
int highScore_score();
int test;
bool isInt();
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

	do{
		system("cls");
		choice = 0;
		cout << "MINI GOLF MANIA" << endl << endl;
		cout << "Main Menu" << endl << "1. How to play." << endl << "2. Play Now!" << endl <<"3. High Scores." << endl <<"4. Quit"<<endl<<endl;
		cin >> choice;
		while(isdigit(choice)){
			switch (choice){
			case 1:
				tutorial();
				break;
			case 2:
				//game();
				break;
			case 3:
				highScore();
				break;
			}
		}
	}while(choice != 4);
	return 0;
}
int welcome(/*Say hello to the nice people*/){
	system("Color 0C");
	cout << "WELCOME TO MINI GOLF MANIA"<<endl<<endl;
	Sleep(200);
	system("Color 0F");
	Sleep(200);
	system("Color 0C");
	Sleep(200);
	system("Color 0F");
	Sleep(200);
	Sleep(1000);
	cout << "Play smart!"<< endl;
	Sleep(200);
	system("Color 0C");
	Sleep(200);
	system("Color 0F");
	Sleep(200);
	Sleep(1000);
	cout <<"Win low!"<<endl;
	Sleep(200);
	system("Color 0C");
	Sleep(200);
	system("Color 0F");
	Sleep(200);
	system("Color 0C");
	Sleep(200);
	system("Color 0F");
	Sleep(4000);
	system("cls");
	Sleep(500);
	return 0;
}
//Where the menu switchs are sent
void tutorial(){
	/*Load tutorial map*/

}
int highScore(){
	if(score.size()!=0){
		for(int i = 0; i < score.size(); i++){
			cout << /*placeholder for names <<*/ score.at(i)<< flush <<endl;
			Sleep(300);
		}
	}else{
		cout << "no scores here yet!" << endl;
	}
	Sleep(4000);
	cout << "returning to main menu"<< endl;
	Sleep(2000);
	system("cls");
	return 0;
}
//Validators
/*
bool isAnInt(int test){
	return(isdigit(test) && test < 32767 && test > -32767)?true:false;
}
*/