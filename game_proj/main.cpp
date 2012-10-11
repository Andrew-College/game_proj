//local includes
#include "includers.h"
//#include "worldObjects.h"
#include "validator.h"
#include <vector>
#include <string>

//namespace section
using namespace std;
//declaring variables
int main_menu();
int welcome();
int tutorial();
int highScore();
bool isItInt();
bool load(string input);
int test;
int game();
void setAngle(int x, int y);
void printCbyC(string input, int wait);
void setCursor(int x, int y);
int findBall();
void setCursorPos(int x, int y);
int ballX = 0;
int ballY = 0;
int angleX = 0;
int angleY = 0;
string line = "";
int i = 0;
int j = 0;
char cache = 'H';

using namespace std;
///////////////////////////////////////////
//All the method names are human-readable//
///////////////////////////////////////////

//The main part, the bit that calls everything
int main(){
	welcome();
	main_menu();
	return 0;
}


int main_menu(){
	int choice = 0;
	bool end = false;


	do{
		system("cls");
		choice = 0;
		cout << "MINI GOLF MANIA" << endl << endl;
		cout << "Main Menu" << endl << "1. How to play." << endl << "2. Play Now!" << endl <<"3. High Scores." << endl <<"4. Quit"<<endl<<endl;
		cin >> choice;
		if(isItInt(choice)){
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
			case 4:
				return 0;
			default:
				cout << "invalid choice";
				Sleep(3000);
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
int tutorial(){
	string line;
	system("cls");
	printCbyC("Welcome to the", 150);
	system("cls");

	cout << "MINI GOLF MANIA";
	for(int i = 0; i < 0; i++){
		system("color 04");
		Sleep(50);
		system("color 31");
		Sleep(50);
		system("color F0");
		Sleep(50);
		system("color 79");
		Sleep(50);
		system("color 04");
		Sleep(50);
		system("color 31");
		Sleep(50);
		system("color F0");
		Sleep(50);
		system("color 79");
		Sleep(50);
	}
	system("cls");
	system("Color 0F");
	cout << "tutorial";
	Sleep(800);
	system("cls");
	load("tutorial.txt");


	Sleep(1500);
	printCbyC("This is the map, it consists of the ball, \"*\",\na hole \"#\", the ground \",\", the out-of-bounds area \"H\"\nand the walls \"|,_,/, \\\"\n",100);
	Sleep(2000);
	printCbyC("\nTo complete the level, you must put the ball \ninto the hole in the least amount of strokes.", 100);
	Sleep(1500);
	printCbyC("\n\nYour first option is to select where your ball will go...\n\nPress enter when you want to select the distance", 100);
	Sleep(1500);
	setCursor(ballX,ballY);
	setAngle(ballX, ballY);
	Sleep(3000);
	system("cls");
	return 0;
}
int game(){
	system("cls");
	ballX = 0;
	ballY = 0;

	load("tutorial.txt");
	setAngle(ballX, ballY);
	return 0;
}
int highScore(){
	/*
	if(score.size()!=0){
	for(int i = 0; i < score.size(); i++){
	cout << /*placeholder for names << score.at(i)<< flush <<endl;
	Sleep(300);
	}
	}else{
	*/
	cout << "no scores here yet!" << endl;
	//}
	Sleep(4000);
	cout << "returning to main menu"<< endl;
	Sleep(2000);
	system("cls");

	return 0;
}
void setCursor(int x, int y){
	COORD coord = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void printCbyC(string input, int wait){
	for(int i = 0; i < input.size(); i++){
		cout << input[i];
		Sleep(wait);
	}
}

bool load(string input){
	ballY = 0;
	ballX = 0;
	line = "";
	ifstream myfile (input);
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline (myfile,line);
			cout << line << endl;
			if(line.find('*') != -1){
				ballX = line.find('*');	
			}else if(line.find('*') == -1 && ballX == 0){
				ballY++;
			}
		}
		myfile.close();

	} else{

		cout << "ERROR: can't open file.\nAre you sure you have the file in the right folder?" << endl;
		return false;
	}
	return true;
}
void setAngle(int x, int y){
	int time = 100;
	do{
		setCursor(ballX,(ballY+1));
		cout << "|";
		Sleep(time);
		setCursor(ballX,ballY+1);
		cout << ",";
		setCursor(ballX-1,ballY+1);
		cout << "/";
		Sleep(time);
		setCursor(ballX-1,ballY+1);
		cout << ",";
		setCursor(ballX-1,ballY);
		cout << "-";
		Sleep(time);
		setCursor(ballX-1,ballY);
		cout << ",";
		setCursor(ballX-1,ballY-1);
		cout << "\\";
		Sleep(time);
		setCursor(ballX-1,ballY-1);
		cout << ",";
		setCursor(ballX,(ballY-1));
		cout << "|";
		Sleep(time);
		setCursor(ballX,ballY-1);
		cout << ",";
		setCursor(ballX + 1,(ballY-1));
		cout << "/";
		Sleep(time);
		setCursor(ballX + 1,ballY-1);
		cout << ",";
		setCursor(ballX + 1,ballY);
		cout << "-";
		Sleep(time);
		setCursor(ballX + 1,ballY);
		cout << ",";
		setCursor(ballX + 1,ballY + 1);
		cout << "\\";
		Sleep(time);
		setCursor(ballX + 1,ballY + 1);
		cout << ",";
	}while((cin.get()));
}
