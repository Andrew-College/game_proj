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
bool load();
int test;
int game();
void drawMap();
int i = 0;
int j = 0;

//position of objects in map
int xBall;
int yBall;
int xHole;
int yHole;
//end of position objects

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
				break;
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
	//If the file opened correctly then call load methods
	
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
	system("cls");
	//load("tutorial.txt");
		
	ifstream myfile ("tutorial.txt");
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline (myfile,line);
			cout << line << endl;
		}
		myfile.close();

	} else{

		cout << "ERROR: can't open file." << endl;
	
	}
	return 0;
}
int game(){
	//for(int i = 0; i <= 13; i++){
	//drawMap();
	Sleep (3000);
	//}
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
/*
bool load(string input){
	string line;
	ifstream myfile (input);
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline (myfile,line);
			cout << line << endl;
		}
		myfile.close();

	} else{

		cout << "ERROR: can't open file." << endl;
		return false;
	}
	return true;
}
*/