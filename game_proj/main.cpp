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
int tutorial();
int highScore();
int highScore_score();
int test;
int game();
void drawMap();
int i = 0;
int j = 0;
//The map elements
char ball = '*';//Your golf ball
char hole = '#';
char O_O_B = 'H';//Out of bounds area (should surround area)
char diagWallF = '/';
char diagWallB = '\\';//The backslash is an escape character, so it needs to be escaped
string vertWall = "||";//It is a double to distinguish it from the direction selector
char horizWall = '_';
//end of map elements
//position of objects in map
int xBall;
int yBall;
int xHole;
int yHole;
//end of position objects

vector <int> score;//the ArrayList the scores will be stored in

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
		if(/*isdigit(choice) thi is commented out because its causing the code to stop, even with ints*/ 1==1){
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
	/*Load tutorial map*/
	system("cls");
	string welcome = "Welcome to the";
	for(int i = 0; i < welcome.size(); i++){
		cout << welcome[i];
		Sleep(150);
	}
	system("cls");

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
	return 0;
}
int game(){
	for(int i = 0; i <= 13; i++){
		drawMap();
	}
	return 0;
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
void drawMap(/*int xBall, int yBall, map <will be used, when I learn to read .txts>, int xHole, int yHole*/){

	/*for(i = 0; i < 13; i++){
		//not using the x,y coords here, this is just testing
		cout << std::string(20,horizWall) << endl;
		cout << vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< vertWall << std::string(18," ") << vertWall <<endl;
		cout<< std::string(20,horizWall) << endl;
	} doesnt't work, Overload error and have to set i in the for loop*/
	//this is just to test the direction selector
	/*for(i = 0; i < map height; i++){
		for(j = 0; j < map length; i++){
			//in here there needs to be the accross stuff some of the walls, ball and hole, dont worry future me, them rats are churning
			run through the map, line by line and print whatever the cursor is currently over, skipping if a particular thing <the ball> is in that x,y coord
		}
	}*/
}