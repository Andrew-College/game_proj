/*
There are a number of things are commented out, this is because they are WIP when moodle came back online and so were left
*/

//local includes
#include "validator.h"
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

bool didntLose = false;
int score = 0;
string name;
void ddMenu();

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
bool enterWait(int timeout);
bool win();
void setAngle(int x, int y);
void setPower();
void shoot();
void physics();
void printCbyC(string input, int wait);
void setCursor(int x, int y);
int findBall();
string login();
void setCursorPos(int x, int y);
int matriarray[3][8] = {{/*X coordinates*/0,1,1,1,0,-1,-1,-1},{/*Y coordinates*/-1,-1,0,1,1,1,0,-1},{'|'/*12 o clock*/,'/','-',/*lower*/'\\','|'/*6 o clock*/,'/','-',/*upper*/'\\'}};
int count = 0;
int ballX = 0;
int ballY = 0;
string currentLine = "";
int i = 0;
int j = 0;
string theCache = "H";
string theMap[100];

//vector<string> aMap;
vector<string[3]> theScore;
vector</*ScoreCard*/int>::const_iterator iter;
//ifstream inFile("highscores.txt");

using namespace std;
///////////////////////////////////////////
//All the method names are human-readable//
///////////////////////////////////////////

//The main part, the bit that calls everything
int main(){
	welcome();
	login();
	main_menu();
	return 0;
}

string login(){
	string name = "";
	int paswd = 0;
	while(true){



		cout << "LOGIN\n\n" << endl;
		cout << "Name; ";
		cin >> name;

		cout << "Password; ";
		cin >> paswd;

		if(password(name,paswd)){
			break;
		}else{
			string name = "";
			int paswd = 0;
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		}

	}
	return name;
}

int main_menu(){
	int choice = 0;
	bool end = false;


	do{
		system("cls");
		choice = 0;
		score = 0;
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
int tutorial(/*Introduce the main concepts of the game*/){

	string line;
	system("cls");
	printCbyC("Welcome to the", 150);
	system("cls");
	didntLose = false;
	cout << "MINI GOLF MANIA";
	for(int i = 0; i < 4; i++){
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
	printCbyC("This is the map, it consists of the ball, \"*\",\na hole \"#\", the ground \",\", the out-of-bounds area \"H\"\nand the walls \"|,_\"\n",100);
	Sleep(2000);
	printCbyC("\nTo complete the level, you must put the ball \ninto the hole in the least amount of strokes.", 100);
	Sleep(1500);
	printCbyC("\n\nYour first option is to select where your ball will go...\n\nPress enter when you want to select the angle", 100);
	Sleep(1500);
	setCursor(ballX,ballY);
	setAngle(ballX, ballY);
	setCursor(0,23);
	printCbyC("Now you have the angle set, you are going to set the power, after that, the ball will move. Keep shooting until you get to the hole!",100);
	Sleep(3000);
	setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
	setPower();
	score++;
	while(!didntLose){
		score++;
		setAngle(ballX, ballY);
		setPower();
	}
	//cout << "enter your name here;";
	//cin >> name;
	//theScore.push_back(new ScoreCard(name,"tutorial.txt",score));
	//theScore.push_back(score);
	return 0;
}
int game(){

	didntLose = false;
	system("cls");
	ballX = 0;
	ballY = 0;
	score = 0;
	if(load("tutorial.txt")){

		Sleep(1000);
		while(!didntLose){
			setCursor(1,0);
			printCbyC("S", 0);
			setCursor(2,0);
			printCbyC("c", 0);
			setCursor(3,0);
			printCbyC("o", 0);
			setCursor(4,0);
			printCbyC("r", 0);
			setCursor(5,0);
			printCbyC("e", 0);
			setCursor(6,0);
			printCbyC(":", 0);
			setCursor(7,0);
			printCbyC(" ", 0);
			setCursor(8,0);
			cout << score;
			setAngle(ballX, ballY);
			setPower();
			if(!didntLose){
				score++;
			}
		}
		//cout << "enter your name here;";
		//cin >> name;
		//theScore.push_back(new ScoreCard(name,"tutorial.txt",score));
		//theScore.push_back(score);
	}
	return 0;
}
int highScore(){

	if(theScore.size()!=0){

	}else{
		cout << "no scores here yet!" << endl;
	}
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
	for(unsigned i = 0; i < input.size(); i++){
		cout << input[i];
		Sleep(wait);
	}
}
bool load(string input){
	ballY = 0;
	ballX = 0;
	currentLine = "";
	ifstream myfile (input);
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline (myfile,currentLine);
			theMap[count] = currentLine;
			cout << currentLine << endl;
			if(currentLine.find('*') != -1){
				ballX = currentLine.find('*');	
			}else if(currentLine.find('*') == -1 && ballX == 0){
				ballY++;
			}
			++count;
		}
		myfile.close();
	} else{
		cout << "ERROR: can't open file.\nAre you sure you have the file in the right folder?" << endl;
		return false;
	}
	return true;
}
void setAngle(int x, int y){
	bool yes = false;
	while(!didntLose){
		for(i = 0;i < 8 ;i ++ ){
			setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
			theCache = (string)(theMap[ballY+matriarray[1][i]].substr(ballX+matriarray[0][i],1));
			cout << (char)(matriarray[2][i]);
			if(enterWait(1)){
				yes = true;
				break;
			}
			setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
			cout << theCache;
		}
		if(yes){
			break;
		}
	}
}
void setPower(){
	j = 0;
	while(true){
		j++;
		setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
		cout << j;
		if(enterWait(1)){
			setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
			cout << theCache;
			shoot();
			break;
		}if(j == 5){
			j = 0;
		}
	}
}
void shoot(){
	while(j != 0 && !didntLose){
		setCursor(ballX,ballY);
		theCache = (string)(theMap[ballY+matriarray[1][i]].substr(ballX+matriarray[0][i],1));
		//setCursor(0,13); //This printed out what was in the cache, handy for collision bugs
		//cout << theCache;
		setCursor(ballX,ballY);
		cout << ',';
		physics();
		if(theCache == "H"){
			score++;
			theCache = (string)(theMap[ballY+matriarray[1][i]].substr(ballX+matriarray[0][i],1));
			j = 0;
			cout << '*';
		}else{
			setCursor(ballX+matriarray[0][i],ballY+matriarray[1][i]);
			ballX = ballX+matriarray[0][i];
			ballY = ballY+matriarray[1][i];
			cout << '*';
			j = j - 1;
			Sleep(500);
			win();
		}
	}
}
void physics(){
	/*
	do ifs for the different characters, then for the walls they will logically collide with, 
	since the ball is governed by a matrix all thats needed to be changed is one value
	*/
	if((char)(matriarray[2][i]) == '-'){
		if(theCache == "|" && i == 2 ){
			i = 6;
		}else if(theCache == "|" && i == 6 ){
			i = 2;
		}
	}else if((char)(matriarray[2][i]) == '\\'){
		if((theCache == "_" && i == 3) || (theCache == "|" && i == 7) ){
			i = 1;
		}else if((theCache == "_" && i == 7) || (theCache == "|" && i == 3)){
			i = 5;
		}
	}else if((char)(matriarray[2][i]) == '|'){
		if((theCache == "_" && i == 0)){
			i = 4;
		}else if((theCache == "_" && i == 4)){
			i = 0;
		}
	}else if((char)(matriarray[2][i]) == '/'){
		if((theCache == "_" && i == 1) || (theCache == "|" && i == 5)){
			i = 3;
		}else if((theCache == "_" && i == 5) || (theCache == "|" && i == 1)){
			i = 7;
		}
	}
	theCache = (string)(theMap[ballY+matriarray[1][i]].substr(ballX+matriarray[0][i],1));
}
bool enterWait(int timeout){
	time_t start = time(0);
	while(true){
		if(difftime(time(0),start) >= timeout){
			return false;
		}
		if(kbhit()){
			char enterPress = (int)getche();
			if(enterPress == 13){
				return true;
			}else{
			}
		}
	}
	return true;
}
bool win(){
	if(theCache == "#"){
		didntLose = true;
		cout << "YOU WIN!";
		for(int k = 0; k < 4; k++){
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
		system("Color 0F");
		system("cls");
		return true;
	}
	return false;
}

void ddMenu(){
	setCursor(ballX,ballY);
	//NEED LOGIN PAGE
}